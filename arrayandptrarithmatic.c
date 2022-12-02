#include <stdio.h>
int main()
{
    // int a = 34;
    // int* ptra = &a;
    int arr[]={1,2,3,4,5,6,67};
    int* ptrarr = arr;

    printf("Value at position 3 of the array is %d \n",arr[2]);
    printf("The address of first element of the array is %d \n",&arr[0]);
    printf("The address of first element of the array is %d \n",arr);
    printf("The address of second element of the array is %d \n",&arr[1]);
    // Line below is using pointer arithmatic
    printf("The address of second element of the array is %d \n\n",arr+1);
    // arr++;  This will Throw an error. Beacuse arr is constant, This error will go if we creat an pointer.
    // ptrarr++ will not give you any error.

    printf("The value at address of first element of the array is %d \n",*(&arr[0]));
    printf("The value at address of first element of the array is %d \n",arr[0]);
    printf("The value at address of first element of the array is %d \n",*(arr));
    printf("The value at address of secondf element of the array is %d \n",*(&arr[1]));
    printf("The value at address of second element of the array is %d \n",arr[1]);
    // Line below is using pointer arithmatic
    printf("The value at address of second element of the array is %d \n\n",*(arr+1));


    return 0;
}
