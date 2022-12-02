#include <stdio.h>

int main()
{
    int n;
    float kilo, mile;
    printf("Enter 1 if you want to convert from kilometers to miles \n OR\n Enter 2 if you want to convert from miles to kilometers");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("Enter the number of kilometers:");
        scanf("%f", kilo);
        mile = kilo * 1.6;
        printf("Number of miles are%f", mile);
    }

    if (n == 2)
    {
        printf("Enter the number of miles:");
        scanf("%f", mile);
        kilo = mile / 1.6;
        printf("Number of kilometers are:");
    }

    // here 1 inch is equal to 2.54 cms

    // float inch, cm;
    // int n;
    // printf("Enter the number 1 if you want to convert cm to inch \n OR \n Enter 2 if you want to convert inches to cms");
    // scanf("%f",&n);

    // if (n==1)
    // {
    //     printf("Enter the number of cm");
    //     scanf("%f",&cm);
    //     float inch = cm * 2.54;
    //     printf("inch= %f",inch);
    // }

    // if (n==2)
    // {
    //     printf("Enter the number of inches:");
    //     scanf("%f",&inch);
    //     float cm= inch/2.54;
    //     printf("cm=%f",cm);
    // }

    return 0;
}
