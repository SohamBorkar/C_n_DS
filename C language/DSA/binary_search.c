// #include <stdio.h>

// void printArray(int* A, int n){
//     for (int  i = 0; i < n; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     printf("\n");    
// }

// void binarySearch(int *A, int n, int o){
//     int min = A[0];
//     int max = A[n-1];
//     int mid = n / 2;
//     int temp = A[mid];

//     for (int i = 0; i < n-1; i++)
//     {
//         if (o == temp)
//         {
//             printf("%d \n", o);
//             break;
//         }
//         else
//         {
//             if (o < mid)
//                 max = mid;
//             else
//                 min = mid;     
//         }
        
//     }
    
// }

// int main()//  min         max
// {//            0   1   2   3   4   5
//     int A[] = {11, 22, 33, 44, 55, 66};
//     int n = 6;
//     int o = 22;

//     // printArray(A, n);
//     binarySearch(A, n, o);
//     printArray(A, n);
//     return 0;
// }

//  Below code is to give just yes or no answer for finding of element
// int arr[7] = {1,2,3,4,5,6,7};
//     int min = 0, max = 6, key = 1, temp = 7 / 2, mid;

//     while(temp > 0){
//         mid = (min + max)/ 2;
//         if(mid == key){
//             printf("Found at %d\n", temp);
//             break;
//         }
//         else if (key < mid)
//             max = mid;
//         else
//             min = mid;
//         temp--;
//     }





// If code above didn't work, then try to run below code.

#include <stdio.h>

void bin_search(int* A, int n, int tf){
    int start = 0, end = n - 1, mid = (start + end) / 2;
    for (int i = 0; i < n / 2; i++)
    {
        if (tf == A[mid])
        {
            printf("Element found at %d", mid);
            return;
        }
        else
        {
            if (A[mid] > tf)
            {
                end = mid;
            }
            
            else
            {
                start = mid;
            }
            
        }
        
        mid = (start + end) / 2;
    }
    
}

int main()
{//            0  1  2  3  4  5  6
    int A[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int tf = 7;

    bin_search(A, n, tf);
    return 0;
}