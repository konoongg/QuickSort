#include <stdlib.h>
#include <stdio.h>
#include "func.h"


int main(void) {
	long size;
	if ((scanf_s("%ld", &size) == -1)) {
		return 0;
	}
	if (size == 0) {
		return 0;
	}
	int* numbers = (int*)malloc(size * sizeof(int));
	for (long i = 0; i < size; ++i) {
        if ((scanf_s("%d", &numbers[i]) == -1)) {
			return 0;
		}
	}
	QuickSort(numbers, 0, size - 1);
	for (long i = 0; i < size; ++i) {
		printf("%d ", numbers[i]);
	}
	free(numbers);
	return 0;
}
