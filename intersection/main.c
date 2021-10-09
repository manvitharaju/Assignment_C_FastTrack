#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[] = { 1,2,4,5,6,7,8 };
    int arr2[] = { 2,3,5,7,9,2 };
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    Intersection(arr1, arr2, m, n);
    return 0;
}
