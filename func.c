#include <stdlib.h>
#include <stdio.h>
#include "func.h"

void Swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

void QuickSort(int* numbers, size_t start, size_t end) {
    if (end - start < 1) {
        return;
    }
    size_t left = start;
    size_t right = end;
    size_t pvot = (start + rand() % (end - start +1));
    while (left < right) {
        while (numbers[left] < numbers[pvot] ) {
            ++left;
        }
        while (numbers[right] > numbers[pvot] ) {
            --right;
        }
        if (left < right) {
            Swap(&numbers[left],&numbers[right]);
            --right;
            ++left;
        }
        
    }
    if (end - start > 1) {
        QuickSort(numbers, left, end);
        QuickSort(numbers, start, right);
    }
    
}
