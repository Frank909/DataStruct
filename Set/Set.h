#ifndef SET_H
#define SET_H

template<class T>
class Set{
public:
    typedef T typeElem;

//costruttori e distruttori
    Set<T>();
    ~Set<T>();

//Specifica delle interfacce
    void     create();
    bool     isEmpty();
    bool     contains(typeElem);
    void     insert(typeElem);
    void     erase(typeElem);
    void     _union(Set<typeElem> &, Set<typeElem> &);
    void     intersect(Set<typeElem> &, Set<typeElem> &);
    void     difference(Set<typeElem> &, Set<typeElem> &);

    friend std::ostream& operator<<(std::ostream& os, const Set<T> &S){
        pos p = S.start;
        while(p != NULL){
            os << p->elem << " ";
            p = p->succ;
        }
        return os;
    }

private:
    //definizione dei tipi
    struct nodo{
        typeElem elem;
        struct nodo* succ;
    };

    typedef struct nodo* pos;

    pos start; //riferimento iniziale
};

template<class T>
Set<T>::Set(){
    create();
}

template<class T>
Set<T>::~Set() {
    pos p = start, temp;
    while (p != NULL) {
        temp = p->succ;
        erase(p->elem);
        p = temp;
    }
}

template<class T>
void Set<T>::create() {
    start = NULL;
}

template<class T>
bool Set<T>::isEmpty(){
    return start == NULL;
}

template<class T>
bool Set<T>::contains(T a){
    pos p = start;
    while(p != NULL) {
        if(a == p->elem)
            return true;
        else
            p = p->succ;
    }
    return false;
}

template<class T>
void Set<T>::insert(T a){
    if(contains(a))
        std::cout << "\nElemento gia' presente\n";
    else {
        pos newNodo = new nodo;
        newNodo->elem = a;
        newNodo->succ = start;
        start = newNodo;
    }
}

template<class T>
void Set<T>::erase(T a){
    pos p = start;

    if(!contains(a))
        std::cout << "\nElemento non presente\n";
    else{
        while(p != NULL){
            if(a == p->elem)
            {
                if(p == start){
                    start = start->succ;
                    delete p;
                    return;
                }else{
                    pos temp = start;
                    while(temp->succ != p)
                        temp->succ = p->succ;
                    delete p;
                    return;
                }
            }else
                p = p->succ;
        }
    }
    return;
}

template<class T>
void Set<T>::_union(Set<T> &A, Set<T> &B) {
    pos p = A.start;
    create();

    while(p != NULL) {
        insert(p->elem);
        p = p->succ;
    }

    p = B.start;

    while(p != NULL){
        insert(p->elem);
        p = p->succ;
    }
}

template<class T>
void Set<T>::intersect(Set<T> &A, Set<T> &B){
    pos p = A.start;
    create();
    while(p != NULL){
        if(B.contains(p->elem))
            insert(p->elem);
        p = p->succ;
    }
}

template<class T>
void Set<T>::difference(Set<T> &A, Set<T> &B){
    pos p = A.start;
    create();

    while(p != NULL) {
        if(!B.contains(p->elem))
            insert(p->elem);
        p = p->succ;
    }
}

#endif
