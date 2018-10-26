#ifndef _LISTP_H
#define _LISTP_H

#include "Cell.h"
#include "linear_list.h"

template <class T> class ListP : public Linear_list<T, Cell<T>*>{
public:
    typedef typename Linear_list<T, Cell<T>*>::value_type value_type;
    typedef typename Linear_list<T, Cell<T>*>::position position;

    ListP();
    ListP(const ListP <T> &);
    ~ListP();

    void reverse();
    bool empty() const override;
    value_type read(position) const override;
    void write(const value_type &, position) override;
    position begin() const override;
    position last() const;
    bool end(position) const override;
    position next(position) const override;
    position previous(position) const override;
    void insert(const value_type &, position) override;
    void erase(position) override;
    void clear() override;
    int size() const override;
    void push_front(const value_type &) override;
    void push_back(const value_type &) override;
    void pop_front() override;
    void pop_back() override;
    void create() override;

private:
    position pos;
    int _length = 0;
};

template<class T>
ListP<T>::ListP() {
    create();
}

template< class T >
ListP<T>::ListP(const ListP<T> &l) {
    this->create();
    position p = l.begin();
    position m = this->begin();

    while(!l.end(p)) {
        this->insert(l.read(p), this->next(m));
        p = l.next(p);
        m = this->next(m);
    }
}

template< class T >
ListP<T>::~ListP() {
    position p = begin();
    position q;
    while (this->pos != p) {
        q = p;
        p = p->getNext();
        delete q;
    }
    delete pos;
}

template<class T>
void ListP<T>::create() {
    value_type emptyElem;
    this->pos = new Cell<T>();
    this->pos->setElem(emptyElem);
    this->pos->setNext(this->pos);
    this->pos->setPrevious(this->pos);
}

template<class T>
bool ListP<T>::empty() const {
    return (pos->getNext() == pos) && (pos->getPrevious() == pos);
}

template<class T>
typename ListP<T>::position ListP<T>::begin() const {
    return this->pos->getNext();
}

template<class T>
typename ListP<T>::position ListP<T>::last() const {
    return this->pos->getPrevious();
}

template<class T>
bool ListP<T>::end(position cell) const {
    return (cell == this->pos);
}

template<class T>
typename ListP<T>::position ListP<T>::next(position cell) const {
    return (cell->getNext());
}

template<class T>
typename ListP<T>::position ListP<T>::previous(position cell) const {
    return (cell->getPrevious());
}

template<class T>
void ListP<T>::insert(const value_type &a, position cell) {
    typename ListP<T>::position temp = new Cell<T>();

    temp->setElem(a);
    temp->setPrevious(cell->getPrevious());
    temp->setNext(cell);

    (cell->getPrevious())->setNext(temp);
    cell->setPrevious(temp);
    _length++;
}

template<class T>
typename ListP<T>::value_type ListP<T>::read(position cell) const {
    return (cell->getElem());
}

template<class T>
void ListP<T>::write(const value_type &a, position cell) {
    cell->setElem(a);
}

template<class T>
void ListP<T>::erase(position cell) {
    typename ListP<T>::position temp = cell;

    (cell->getPrevious())->setNext(cell->getNext());
    (cell->getNext())->setPrevious(cell->getPrevious());

    _length--;

    delete temp;
}

template <class T>
int ListP<T>::size() const {
    return this->_length;
}

template <class T>
void ListP<T>::push_front(const value_type &e) {
    insert(e, begin());
}

template <class T>
void ListP<T>::push_back(const value_type &e) {
    insert(e, next(last()));
}

template <class T>
void ListP<T>::pop_front() {
    erase(begin());
}

template <class T>
void ListP<T>::pop_back() {
    erase(last());
}

template <class T>
void ListP<T>::clear() {
    for(position p = this->begin(); !end(p); p = next(p)) erase(p);
}

template<class T>
void ListP<T>::reverse(){
    for(position p = last(); p != begin(); p = previous(p)) {
        value_type temp = read(p);
        erase(p);
        push_back(temp);
        if(previous(p) == begin()){
            push_back(read(begin()));
            erase(previous(p));
        }
    }
}

#endif //_LISTP_H
