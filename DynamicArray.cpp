//
// Created by kadir on 12/4/2023.
//

#include <iostream>
#include "DynamicArray.h"


void DynamicArray::pop() {
    size--;
}

void DynamicArray::fit() {
    if (this->capacity <= this->size + 1) return;

    int* newArr = new int[this->size + 1];
    for (int i = 0; i < size + 1; i++) {
        newArr[i] = this->arr[i];
    }

    this->arr = newArr;
    this->capacity = this->size + 1;
}

void DynamicArray::removeElement(int index) {
    bool targetSeen = false;
    int* newArr = new int[this->size];

    for (int i = 0; i < this->size + 1; i++) {
        if (i == index) {
            targetSeen = true;
            continue;
        }

        if (!targetSeen) {
            newArr[i] = this->arr[i];
        } else {
            newArr[i - 1] = this->arr[i];
        }
    }

    this->arr = newArr;
    this->size--;
}

DynamicArray::DynamicArray(const int (&arr)[], int size) {
    this->size = size - 1;
    this->capacity = size * 2;
    this->arr = new int[capacity];
    for (int i = 0; i < size + 1; i++) {
        this->arr[i] = arr[i];
    }
}

int DynamicArray::get(int index) {
    return this->arr[index];
}

int DynamicArray::getCapacity() {
    return this->capacity;
}

int DynamicArray::length() {
    return this->size + 1;
}

void DynamicArray::printOut() {
    for (int i = 0; i < size + 1; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

void DynamicArray::increaseCapacity() {
    if (this->capacity <= 0) this->capacity = 1;

    this->capacity *= 2;
    int* newArr = new int[this->capacity];

    for (int i = 0; i < size + 1; i++) {
        newArr[i] = this->arr[i];
    }

    this->arr = newArr;
}

void DynamicArray::push(int x) {
    if (size + 1 >= capacity) {
        increaseCapacity();
    }

    this->arr[++size] = x;
}
