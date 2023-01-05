#include <stdio.h>

int partition(int* arr, int low, int high){
    int j = low - 1, pivot = arr[high - 1];

    for (int i = 0; i < high; i++)
    {
        if (arr[i] <= pivot)
        {
            j++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        
    }
    partition(arr, low, pivot - 1);
    partition(arr, pivot + 1, high);
};

void printarr(int* arr, int high){
    for (int  i = 0; i < high; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
};

int main()
{
    int arr[8] = {10, 80, 30, 90, 40, 50, 70};
    //             0   1   2   3   4   5   6 
    int low = 0, high = sizeof(arr) / sizeof(int) - 1;

    printarr(arr, high);
    partition(arr, low, high);
    printarr(arr, high);

    return 0;
}