#include <stdlib.h>
#include <stdio.h>
#include "func.h"

void Swap(int* first, int* second) {
	int temp = *first;
	*first = *second;
	*second = temp;
}

void QuickSort(int* numbers, size_t start, size_t end, size_t size) {
	if (end - start < 1) {
		return;
	}
	size_t left = start;
	size_t right = end;
	size_t pvot = (start + rand()%(end +1 - start ));
	while (left < right) {
		while (numbers[left] < numbers[pvot] ) {
			++left;
		}
		while (numbers[right] > numbers[pvot] ) {
			--right;
		}
		if (left < right) {
			Swap(&numbers[left],&numbers[right]);
			//for (int i = left; i <= right; ++i) {
				//printf("%d ", numbers[i]);
			//}
			//printf("\n");
			++left;
			--right;
		}
		
    }
	if (end - start > 1) {
		QuickSort(numbers, left, end, size);
		QuickSort(numbers, start, right, size);
	}
	
}