#include <stdlib.h>

int *array_diff(const int *arr1, size_t n1, const int *arr2, size_t n2, size_t *z)
{

    int *arr = (int *)malloc(sizeof(int) * n1);
    size_t i = 0;
    size_t j = 0;
    size_t k = 0;

    for (i = 0; i < n1; i++)
    {
        int checker = 0;
        for (j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                checker = 1;
            }
        }
        if (checker == 0)
        {
            arr[k] = arr1[i];
            k++;
        }
    }
    *z = k;
    return arr;
}