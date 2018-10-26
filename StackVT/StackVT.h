#ifndef STACKVT_H
#define STACKVT_H

#include <iostream>

using namespace std;

template <class Elemento>
class Pila {
public:
    typedef Elemento tipoelem;
    Pila();
    Pila(int);
    ~Pila();
    void creaPila();
    bool pilaVuota() const;
    tipoelem leggiPila() const;
    void fuoriPila();
    void inPila(tipoelem);
private:
    tipoelem *elementi;
    int MAXLUNGH;
    int testa;

    friend ostream& operator<<(ostream& os, const Pila<Elemento> &p){
        for(int i = p.testa - 1; i >= 0; i--)
            os << p.elementi[i] << " ";

        return os << endl;
    }
};

template <class Elemento>
Pila<Elemento>::Pila() {
    elementi = new tipoelem[100]; // dimensione standard della pila
    MAXLUNGH = 100;
    creaPila();
}

template <class Elemento>
Pila<Elemento>::Pila(int N) {
    elementi = new tipoelem[N]; // dimensione N della pila
    MAXLUNGH = N;
    creaPila();
}

template <class Elemento>
Pila<Elemento>::~Pila() {
    delete[] elementi;
};

template <class Elemento>
void Pila<Elemento>::creaPila() {
    testa = 0;
}

template <class Elemento>
bool Pila<Elemento>::pilaVuota() const {
    return testa == 0;
}

template <class Elemento>
Elemento Pila<Elemento>::leggiPila() const {
    return elementi[testa - 1];
}

template <class Elemento>
void Pila<Elemento>::fuoriPila(){
    if (!pilaVuota()) {
        testa -= 1;
    }else
        cout<<"nessun elemento nella pila"<<endl;
}

template <class Elemento>
void Pila<Elemento>::inPila(tipoelem el) {
    if (testa == MAXLUNGH) {
        cout<<"raggiunta capacitÃ  massima della pila"<<endl;
    }else{
        elementi[testa] = el;
        testa++;
    }
}

#endif //STACKVT_H
