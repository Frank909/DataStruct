#ifndef _LISTALIN_H
#define _LISTALIN_H

#include <iostream>

using std::cout;
using std::endl;
using std::ostream;

// classe astratta listaLinare
template< class T, class P >
class Linear_list{
public:
    typedef T value_type;   // the type of object, T, stored in the list
    typedef P position;

    void reverse();
    bool palindrome();

    virtual void create() = 0;
    virtual bool empty() const = 0; // true if the list's size is 0
    virtual value_type read(position) const = 0;
    virtual void write(const value_type & x, position p) = 0; // write x at position p
    virtual position begin() const = 0;  // returns a position pointing to the beginning of the list
    virtual bool end(position) const = 0; // verify whether a position points to the end of the list
    virtual position next(position) const = 0; // returns the next position
    virtual position previous(position) const = 0; // return the previous position
    virtual void insert(const value_type &, position) = 0; // insert an element
    virtual void erase(position pos) = 0; // erases the element at position pos

    virtual int size() const = 0;  // returns the size of the list
    virtual void push_front(const value_type &) = 0; // insert a new element at the beginning
    virtual void push_back(const value_type &) = 0; // insert a new element at the end
    virtual void pop_front() = 0; // removes the begin element
    virtual void pop_back() = 0; // removes the last element
    virtual void clear() = 0; // erases all the elements
};

/* sovraccarica <<. Attenzione se il tipo restituito da read non Ã¨ primitivo, allora
 * anche per questo tipo bisogna sovraccaricare l'operatore <<
 */
template <class T, class P>
ostream& operator<<(ostream& os, const Linear_list<T,P> &l){
    typename Linear_list<T,P>::position p;
    p = l.begin();
    cout << "[";
    while (!l.end(p)){
        if (p != l.begin())
            cout << ", " << l.read(p);
        else
            cout << l.read(p);
        p = l.next(p);
    }
    cout << "]" << endl;
    return os;
}

template<class T, class P>
void Linear_list<T,P>::reverse(){
    const int size = this->size();
    for(position p = size; p != begin(); p = previous(p)) {
        value_type temp = read(p);
        erase(p);
        push_back(temp);
        if(previous(p) == begin()){
            push_back(read(begin()));
            erase(previous(p));
        }
    }
}

template<class T, class P>
bool Linear_list<T,P>::palindrome() {
    bool cond = false;
    const int size = this->size();
    position iter = begin();
    for(position p = size; p!= begin(); p = previous(p)){
        if(read(iter) != read(p))
            break;
        else
            cond = true;
        if(previous(p) == begin())
            if(read(next(iter)) != read(previous(p)))
                break;
            else
                cond = true;
    }
    return cond;
}

#endif // _LISTALIN_H