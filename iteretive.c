#include <stdio.h>
int main()
{
    int i,n;
    int fact=1;
    printf("Enter the number of which you want factorial:");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        fact= fact* i;
    }
     printf("The factorial of number %d is %d",n,fact);

     
    return 0;

}