#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <stdlib.h>
void quicksort(void *arr[], size_t lo, size_t hi,
               int (*cmp) (void *, void *));
#endif

