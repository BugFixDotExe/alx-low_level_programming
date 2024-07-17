#ifndef SEARCH_ALGO_H
#define SEARCH_ALGO_H

/*Standard Header files*/
#include <stdio.h>
#include <stdlib.h>

/*Prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int min(size_t a, size_t b);
int binarySearch(int array[], size_t l, size_t r, int x);
#endif /*SEARCH_ALGO_H*/
