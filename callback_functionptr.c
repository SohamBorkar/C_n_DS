

            //  In this program we can call the one function in another function or in int main.

#include <stdio.h>

int sum (int a, int b)
{
    return a + b;
}

void greetGoodEveningandexecute(int (*fptr) (int, int))     // Here we called function sum.

{
    printf("Good Evening user \n");
    printf("The sum of 5 and 7 is : %d \n\n",fptr(5,7));
}

void greetGoodNightandexecute(int (*fptr) (int, int))        // Here we called function sum.

{
    printf("Good Night \n");
    printf("The sum of 5 and 6 is : %d \n\n", fptr(5,6));
}


int main()
{
    int (*ptr) (int , int);  // Here we can write "*fptr" also.
    ptr = sum;  // Here we can write as  "ptr = &sum;"


    // If we wanted to Greet user as " Good Evening " , then we call function "greetGoodEveningandexecute" function     OTHERWISE     If we want to Greet user as " Be Happy " , then we call function "greetGoodNightandexecute" . 

    greetGoodEveningandexecute(ptr);    // Here we used ptr as pointer of function sum.
    // greetGoodNightandexecute(ptr);      // Here we used ptr as pointer of function sum.


    return 0;
}