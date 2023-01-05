#include <stdio.h>

int GenerateRandomNumber(int n)
{
    // srand(time(0));  // if program gives you error, uncomment this line.
    return rand()%n+1;
};

int main()
{
    printf("The Random Between 1 to 3 is : %d\n", GenerateRandomNumber(3));

    return 0;
}