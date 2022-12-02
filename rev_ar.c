#include <stdio.h>
int rev(int arr[])

{   
    int temp;
    for (int i = 0; i <= 2; i++)
    {
       arr[i]=temp;
       arr[i]=arr[(4-i)];
       arr[(4-i)]=temp;
    }
    
    
}
int main()
{
    int arr[]={1,2,3,4,5};
    rev (arr) ;
    printf("%d %d %d %d %d \n",arr[0], arr[1], arr[2], arr[3],arr[4]);
    // printf("%d \n",arr[1]);
    // printf("%d \n",arr[2]);
    // printf("%d \n",arr[3]);
    // printf("%d \n",arr[4]);
    

    return 0;
}