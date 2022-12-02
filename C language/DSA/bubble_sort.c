#include <stdio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}

void bubblesort(int* A, int n){
    int temp;
    int issorted = 0;
    printf("\n");

    for (int i = 0; i < n - 1; i++)
    {
        issorted = 1;
        for (int  j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])  
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                issorted = 0;
            }
    
        }
        if (issorted)
        {
            return;
        }
    }
}

int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(A, n);
    bubblesort(A, n);
    printArray(A, n);
    return 0;
}