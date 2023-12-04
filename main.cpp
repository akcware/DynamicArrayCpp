/*
 * Aşkın Kadir Çekim
 * 12 April, 2023
 */

#include <iostream>
#include "DynamicArray.h"


int main() {
    DynamicArray dA({0, 1, 2}, 3); dA.printOut(); // 0 1 2
    dA.push(3); dA.printOut(); // 0 1 2 3
    dA.pop(); dA.printOut(); // 0 1 2
    dA.push(3); dA.printOut();
    dA.push(32); dA.printOut();
    dA.push(45); dA.printOut();
    dA.removeElement(4); dA.printOut(); // 0 1 2 3 45
    return 0;
}

