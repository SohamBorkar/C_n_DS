#include <stdio.h>
int main()
{
    int arr[2][2]={{4,5},{3,4}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("the value at %d, %d is %d  \n",i,j,arr[i][j]);
        }
        
    }
    

    return 0;
}