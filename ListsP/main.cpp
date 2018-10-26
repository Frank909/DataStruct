#include <iostream>
#include <chrono>
#include "ListP.h"

typedef typename ListP<int>::position Position;

int main() {
    unsigned seed = std::chrono::steady_clock::now().time_since_epoch().count();
    srand(seed);

    ListP<int> intList;

    intList.empty() ? std::cout << "Lista vuota" << std::endl : std::cout << "La lista contiene degli elementi" << std::endl;

    for(int i = 0; i < 10; i++){
        int a = rand() % 10;
        intList.insert(a, intList.begin());
    }

    std::cout << intList << std::endl;
    std::cout << "Riscrivo sulla lista nuovi elementi :";

    for(Position p = intList.begin(); !intList.end(p); p = intList.next(p)){
        int a = rand() % 10;
        intList.write(a, p);
    }

    std::cout << intList << std::endl;

    intList.empty() ? std::cout << "Lista vuota" << std::endl :
        std::cout << "La lista contiene "<< intList.size() << " elementi" << std::endl;

    std::cout << "Leggo primo elemento: " << intList.read(intList.begin()) << std::endl;
    std::cout << "Leggo ultimo elemento: " << intList.read(intList.last()) << std::endl;

    intList.erase(intList.last());
    std::cout << "Cancello ultimo elemento: " << intList << std::endl;
    std::cout << "Lunghezza lista attuale : " << intList.size() << std::endl;

    std::cout << intList << std::endl;

    intList.pop_front();
    std::cout << "POPFRONT :" << intList << std::endl;

    intList.pop_back();
    std::cout << "POPBACK :" << intList << std::endl;

    intList.push_front(1);
    std::cout << "push_front :" << intList << std::endl;

    intList.push_back(2);
    std::cout << "push_back :" << intList << std::endl;

    intList.clear();
    std::cout << "Epurazione lista:" << intList << std::endl;

    return EXIT_SUCCESS;
}
