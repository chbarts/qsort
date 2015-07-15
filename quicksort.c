#include <stdlib.h>

static void swap(void *arr[], size_t l, size_t r)
{
    void *tmp;
    tmp = arr[l];
    arr[l] = arr[r];
    arr[r] = tmp;
    return;
}

static size_t partition(void *arr[], size_t lo, size_t hi,
                        int (*cmp) (void *, void *))
{
    size_t pivotindex, storeindex, i;
    void *pivotvalue;
    pivotindex = lo + (hi - lo) / 2;
    pivotvalue = arr[pivotindex];
    swap(arr, pivotindex, hi);
    storeindex = lo;
    for (i = lo; i <= hi; i++) {
        if (cmp(arr[i], pivotvalue) < 0) {
            swap(arr, i, storeindex);
            storeindex++;
        }
    }

    swap(arr, storeindex, hi);
    return storeindex;
}

void quicksort(void *arr[], size_t lo, size_t hi,
               int (*cmp) (void *, void *))
{
    size_t p;
    if (lo < hi) {
        p = partition(arr, lo, hi, cmp);
        if (p > 0)
            quicksort(arr, lo, p - 1, cmp);
        quicksort(arr, p + 1, hi, cmp);
    }
}
