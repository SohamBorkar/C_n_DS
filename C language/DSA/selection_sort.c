#include <stdio.h>

void printArray(int* A, int n){
    for (int  i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");    
}

void selectionSort(int * A, int n){
    int indexofmin;
    for (int i = 0; i < n-1; i++)
    {
        int temp;
        for (int j = i + 1; j < n; j++)
        {
            
            if (A[i] > A[j])
            {
                temp = A[j];
                A[j] = A[i];
                A[i] = temp;
            }
            
        }
        
    }
        
}

int main()
{//            0    1  2   3  4   5
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;

    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);
    return 0;
}