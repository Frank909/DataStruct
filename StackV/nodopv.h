#ifndef NODOPV_H
#define NODOPV_H
#include <iostream>

typedef int tipoelem;
using namespace std;

class Nodo {
public:
    Nodo();
    Nodo(tipoelem);
    ~Nodo();

    void setElemento(tipoelem);
    tipoelem getElemento() const;
    bool operator ==(Nodo &);

private:
    tipoelem elemento;
};

Nodo::Nodo()
{}

Nodo::~Nodo()
{}

Nodo::Nodo(tipoelem label) {
    elemento = label;
}

void Nodo::setElemento(tipoelem label) {
    elemento = label;
}

tipoelem Nodo::getElemento() const {
    return elemento;
}

bool Nodo::operator==(Nodo & n) {
    return (getElemento() == n.getElemento());
}

ostream & operator<<(std::ostream & out, const Nodo & nodo) {
    return out << nodo.getElemento();
}

#endif