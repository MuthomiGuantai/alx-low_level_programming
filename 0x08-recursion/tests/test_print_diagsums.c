#include "../main.h"
#include <stdio.h>

int main(void)
{
    int a1[] = {5};
    print_diagsums(a1, 1);

    int a2[] = {1, 2,
                3, 4};
    print_diagsums(a2, 2);

    int a3[] = {0, 1, 2,
                3, 4, 5,
                6, 7, 8};
    print_diagsums(a3, 3);

    int a3n[] = {-1, 2, 3,
                 4, -5, 6,
                 7, 8, -9};
    print_diagsums(a3n, 3);

    int a4[] = {1,  2,  3,  4,
                5,  6,  7,  8,
                9, 10, 11, 12,
               13, 14, 15, 16};
    print_diagsums(a4, 4);

    return 0;
}