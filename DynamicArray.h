//
// Created by kadir on 12/4/2023.
//

#ifndef DYNAMICARRAY_DYNAMICARRAY_H
#define DYNAMICARRAY_DYNAMICARRAY_H


class DynamicArray {
public:
    DynamicArray(const int (&arr)[], int size);
    void push(int x);
    void pop();
    void fit();
    void removeElement(int index);
    int get(int index);
    int getCapacity();
    int length();
    void printOut();
private:
    int* arr;
    int capacity;
    int size = 0;

    void increaseCapacity();
};


#endif //DYNAMICARRAY_DYNAMICARRAY_H
