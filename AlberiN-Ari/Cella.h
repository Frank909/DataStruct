#ifndef _CELLA_H
#define _CELLA_H

#include <iostream>
using namespace std;

template <class T>
class Cella {
public:

    typedef T tipoelem;

    Cella();

    Cella(tipoelem);

    void setElemento(tipoelem);

    tipoelem getElemento() const;

    void setPrimoFiglio(int); // primo figlio (setSX in binario)
    void setProxFratello(int); // fratello più prossimo (setDX in binario)
    void setPadre(int); // padre (setDAD in binario)
    void setPosizione(int);

    int getPosizione() const;

    int getPrimoFiglio() const;

    int getProxFratello() const;

    int getPadre() const;

private:

    tipoelem elemento;
    int padre;
    int primofiglio;
    int proxfratello;
    int posizione;

};
template <class T>
Cella<T>::Cella() {
    primofiglio = -1;
    proxfratello = -1;
    padre = -1;
    //SX=NULL; DX=NULL; DAD=NULL;
}

template <class T>
Cella<T>::Cella(tipoelem e) {
    elemento = e;
}

template <class T>
void Cella<T>::setElemento(tipoelem e) {
    elemento = e;
}

template <class T>
Cella<T>::getElemento() const {
    return elemento;
}

template <class T>
void Cella<T>::setPrimoFiglio(int i) {
    primofiglio = i;
}

template <class T>
void Cella<T>::setProxFratello(int i) {
    proxfratello = i;
}

template <class T>
void Cella<T>::setPadre(int i) {
    padre = i;
}

template <class T>
void Cella<T>::setPosizione(int i) {
    posizione = i;
}

template <class T>
int Cella<T>::getPrimoFiglio() const {
    return primofiglio;
}

template <class T>
int Cella<T>::getProxFratello() const {
    return proxfratello;
}

template <class T>
int Cella<T>::getPadre() const {
    return padre;
}

template <class T>
int Cella<T>::getPosizione() const {
    return posizione;
}

#endif
