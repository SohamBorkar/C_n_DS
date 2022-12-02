// #include<stdio.h>

// int main()
// {
//     int a;
//     printf("\nEnter the last term: ");
//     scanf("%d",&a);
//     printf("natural numbers from 1 to %d: \n",a);
//     for (int i = 0; i <= a; i++)
//     {
//         printf("%d ",i);
//     }
//     // printf("\n");
//     return 0;
// }


                    // Why Recursion is not always useful
                    // Why Recursion is not always useful
                    // Why Recursion is not always useful
                    // Why Recursion is not always useful
                    // Why Recursion is not always useful

 #include <stdio.h>


int fib_recursive(int n)
{
    if(n==1 || n==2){
        return n-1;
    }
    else{
        return fib_recursive(n-1) + fib_recursive(n-2);
    }    
}


int fib_iterative(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n-1; i++)
    {
        b = a+b; //1 for iteration 1
        a = b-a; //1 for iteration 1

    }
    
    return a;
}

int main()
{
    int number;
    printf("Enter the index to get fibonacci series\n");
    scanf("%d", &number);
    printf("The value of fibonacci number at position no %d using iterative approach is %d\n",number, fib_iterative(number));
    printf("The value of fibonacci number at position no %d using recursive approach is %d\n", number, fib_recursive(number));
    return 0;
}
