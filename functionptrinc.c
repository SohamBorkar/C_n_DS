#include <stdio.h>

void greet()
{
    printf("Good Morning Sir\n");
} 

int sum(int a, int b)
{
    return a+b;
}


int main()
{
    printf("The sum of 1 and 2 is : %d\n", sum (1,2)); // Testing the function



    int (*fPtr) (int, int);  // Declearing a function pointer. As it tell that it returns integer as output and taking two integer as an input.

    fPtr = &sum;  // Creating a function pointer. Here we don't have to declear it's data type as int , float , char.

    int d = (*fPtr) (4,5);  // Dereferencing a function pointer.

    printf("The value of d is : \n",d);  // Printing the value of d.

    return 0;
}