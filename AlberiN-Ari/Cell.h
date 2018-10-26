#ifndef LISTSP_CELL_H
#define LISTSP_CELL_H


#include <iostream>

template<class T>
class Cell {
public:
    Cell();
    ~Cell();

    typedef T value_type;

    void setElem(value_type);
    value_type getElem() const;
    void setNext(Cell *);
    Cell<T> * getNext() const;
    void setPrevious(Cell *);
    Cell<T> * getPrevious() const;

private:
    value_type element;
    Cell * prec;
    Cell * succ;
};

// costruttore
template<class T>
Cell<T>::Cell() {
    this->succ = nullptr;
    this->prec = nullptr;
}

// distruttore
template<class T>
Cell<T>::~Cell() {}

template<class T>
void Cell<T>::setElem(const value_type e) {
    this->element = e;
}

template< class T>
void Cell<T>::setNext(Cell *c) {
    this->succ = c;
}

template<class T>
Cell<T> *Cell<T>::getNext() const {
    return succ;
}

template<class T>
void Cell<T>::setPrevious(Cell *c) {
    this->prec = c;
}

template<class T>
typename Cell<T>::value_type Cell<T>::getElem() const {
    return element;
}

template<class T>
Cell<T> *Cell<T>::getPrevious() const {
    return this->prec;
}

#endif //LISTSP_CELL_H
