#include <stdio.h>

printarray(int * arr, int size){
    for (int i = 0; i < size; i++)
        printf("%d, ", arr[i]);    
};

mergesort(int * arr, in int size){

};

int main()
{
    int arr[] = {6,5,4,3,8,2,1};
    int size = sizeof(arr) / sizeof(int);

    printarray(arr, size);
    mergesort(arr, size);
    printarray(arr, size);
    return 0;
}