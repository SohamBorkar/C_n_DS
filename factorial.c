#include <stdio.h>
int main ()
{
    int n,i, fact=1;
    printf(" Enter the number of which you want factorial:\n");
    scanf("%d",&n);
    for (i=1;i<= n; i++)
    {
        fact=fact * i;
    }
        printf("the factorial is %d\n",fact);
    
    return 0;
}
