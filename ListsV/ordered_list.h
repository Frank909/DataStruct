#ifndef _ORDERED_LIST_H
#define _ORDERED_LIST_H

#include "list_vector.h"
template <class T>
class Ordered_list:public List_vector<T>{
public:
    typedef typename Linear_list<T, int>::value_type value_type;
    typedef typename Linear_list<T, int>::position position;

    Ordered_list(){};
    Ordered_list(const Ordered_list<T> &);
    ~Ordered_list(){};

    void insert(value_type); // inserisce un elemento
    void remove(value_type); // rimuove un elemento
    bool search(value_type); // cerca un elemento
    void merge(Ordered_list<T> &);  // fonde con una lista ordinata
};

template<class T>
Ordered_list<T>::Ordered_list(const Ordered_list<T> &l){
    for(position p = l.begin(); !l.end(p); p = l.next(p))
        this->insert(l.read(p));
}

template<class T>
void Ordered_list<T>::insert(value_type v){
    position p = this->begin();
    value_type temp = this->read(p);
    while (temp < v) {
        if(this->end(p))
            break;
        p = this->next(p);
        temp = this->read(p);
    }
    List_vector<value_type>::insert(v, p);
}

template <class T>
void Ordered_list<T>::remove(value_type e) {
    for(position p = this->begin(); !this->end(p); p = this->next(p)) {
        if (this->read(p) == e) {
            this->erase(p);
            p = this->previous(p);
        }
    }
}

template <class T>
void Ordered_list<T>::merge(Ordered_list<T> &l) {
    for(position p = l.begin(); !l.end(p); p = l.next(p)) this->insert(l.read(p));
}

template <class T>
bool Ordered_list<T>::search(value_type e) {
    for(position p = this->begin(); !this->end(p); p = this->next(p)){
       if(this->read(p) == e)
           return true;
    }
    return false;
}

#endif //LISTS_ORDERED_LIST_H


