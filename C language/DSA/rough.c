#include <stdio.h>
int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int min = 0, max = 6, key = 6, temp = 7 / 2, mid;

    for (int i = 0; i < i/2; i++)
    {
        mid = (min + max)/ 2;
        if(mid == key){
            printf("Found at %d\n", mid);
            break;
        }
        else if (key < mid)
            max = mid;
        else if (key > mid)
            min = mid;
    } 
        
    return 0;
}