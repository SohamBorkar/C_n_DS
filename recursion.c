#include <stdio.h>

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{   
    int num;
    printf(" enter the number of which you want the factorial: \n Enter here:");
    scanf("%d",&num);
    printf("The factorial of %d is %d \n",num, factorial(num));

    return 0;
}



//  In this recursion function repeats multiple times into smaller parts .0


