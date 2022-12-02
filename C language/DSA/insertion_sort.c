#include <stdio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf(" \n");
}

void insertionsort(int* A, int n){
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key) // if you want in decending then replace with <key.
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
    
}

int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(A, n);
    insertionsort(A, n);
    printArray(A, n);

    return 0;
}