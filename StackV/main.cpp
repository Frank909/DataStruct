#include <iostream>
#include "pilav.h"

int main() {
    Pila p;
    p.creaPila();

    for(int i = 0; i < 10; i++)
        p.inPila(i + 1);

    std::cout << p;

    p.fuoriPila();

    std::cout << p;

    std::cout << p.leggiPila();
}