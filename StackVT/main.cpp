#include <iostream>
#include "StackVT.h"
int main() {

    Pila<int> p;
    p.creaPila();

    for(int i = 0; i < 10; i++)
        p.inPila(i + 1);

    std::cout << "Contenuto pila: " << p;

    for(int i = 0; i < 3; i++)
        p.fuoriPila();

    std::cout << "Tre elementi rimossi: " << p;

    p.inPila(11);
    std::cout << p;

    return EXIT_SUCCESS;
}