#include <iostream>
#include "QueueP.h"

int main() {
    CodaP<int> coda;
    coda.creaPrioriCoda();

    for(int i = 0; i < 10; i++)
        coda.inserisci(rand() % 100);

    std::cout << coda;

    coda.cancellaMin();
    coda.cancellaMin();

    std::cout << coda;
    std::cout << coda.min() << endl;



    std::cout << coda;


    return EXIT_SUCCESS;
}