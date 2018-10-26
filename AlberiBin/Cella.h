#infndef _CELLA_H_
#define _CELLA_H_

#include <iostream>

using namespace std;

template<class T>
class Cella {
public:

    typedef int nodo;
    typedef T tipoelem;

    Cella();

    ~Cella();

    void setGenitore(const nodo);

    void setSinistro(const nodo);

    void setDestro(const nodo);

    void setIstante(const nodo);

    void setElemento(const tipoelem);

    nodo getGenitore() const;

    nodo getSinistro() const;

    nodo getDestro() const;

    nodo getIstante() const;

    tipoelem getElemento() const;

private:

    nodo genitore;
    nodo sinistro;
    nodo destro;
    nodo istante;
    tipoelem elemento;
};


template<class T>
Cella<T>::Cella() {
}

template<class T>
Cella<T>::~Cella() {
}

template<class T>
void Cella<T>::setGenitore(const nodo n) {
    this->genitore = n;
}

template<class T>
void Cella<T>::setSinistro(const nodo n) {
    this->sinistro = n;
}

template<class T>
void Cella<T>::setDestro(const nodo n) {
    this->destro = n;
}

template<class T>
void Cella<T>::setIstante(const nodo n) {
    this->istante = n;
}

template<class T>
void Cella<T>::setElemento(const tipoelem e) {
    this->elemento = e;
}

template<class T>
typename Cella<T>::nodo Cella<T>::getGenitore() const {
    return this->genitore;
}

template<class T>
typename Cella<T>::nodo Cella<T>::getIstante() const {
    return this->istante;
}


template<class T>
typename Cella<T>::nodo Cella<T>::getSinistro() const {
    return this->sinistro;
}

template<class T>
typename Cella<T>::nodo Cella<T>::getDestro() const {
    return this->destro;
}

template<class T>
typename Cella<T>::tipoelem Cella<T>::getElemento() const {
    return this->tipoelem;
}


#endif
