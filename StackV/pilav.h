#ifndef PILAV_H
#define PILAV_H

#include <iostream>
#include "nodopv.h"

const int MAXLUNGH = 100;
using namespace std;
class Pila {
public:
    Pila();
    ~Pila();
    void creaPila();
    bool pilaVuota() const;
    tipoelem leggiPila() const;
    void fuoriPila();
    void inPila(tipoelem);
private:
    Nodo elementi[MAXLUNGH];
    int testa;

    friend ostream& operator<< (ostream& os, Pila &L){
        for (int i = 0; i< L.testa; i++)
            os << L.elementi[i] << " ";
        return os << endl;
    }
};

Pila::Pila() {
    creaPila();
}

Pila::~Pila()
{}

void Pila::creaPila() {
    for (int i = 0; i < MAXLUNGH; i++)
        elementi[i].setElemento(0);

    testa = 0;
}

bool Pila::pilaVuota() const {
    return testa == 0;
}

tipoelem Pila::leggiPila() const {
    return (elementi[testa-1].getElemento());
}

void Pila::fuoriPila() {
    if (!pilaVuota())
        testa -= 1;
    else
        cout<<"nessun elemento nella pila"<<endl;

}

void Pila::inPila(tipoelem el) {
    if (testa == MAXLUNGH)
        cout << "raggiunta capacità massima della pila" << endl;
    else {
        elementi[testa].setElemento(el);
        testa++;
    }
}

#endif