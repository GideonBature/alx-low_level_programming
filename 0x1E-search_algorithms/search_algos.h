#ifndef _SEARCH_ALGOS_
#define _SEARCH_ALGOS_

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
void print_array_elems(int *array, size_t left, size_t right);
int binary_search_0(int *array, size_t low, size_t high, int value);
size_t min(size_t x, size_t y);
/* listint_t *jump_list(listint_t *list, size_t size, int value); */
/* skiplist_t *linear_skip(skiplist_t *list, int value); */

#endif
