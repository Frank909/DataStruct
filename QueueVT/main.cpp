#include <iostream>
#include "QueueVT.h"

int main() {
    Coda<int> c;
    c.creaCoda();

    for(int i = 0; i < 10; i++)
        c.inCoda(i + (rand() % 10));

    std::cout << c;

    std::cout << c.leggiCoda() << std::endl;

    c.fuoriCoda();
    std::cout << c;

    while(!c.codaVuota())
        c.fuoriCoda();

    std::cout << "Coda svuotata" << std::endl << c;

    return EXIT_SUCCESS;
}