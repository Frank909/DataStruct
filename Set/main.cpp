#include <iostream>
#include "Set.h"

int main() {

    Set<int> a;
    a.insert(1);
    a.insert(2);
    a.insert(3);
    a.insert(3);
    a.insert(3);
    a.insert(4);
    std::cout << a;
    return 0;
}