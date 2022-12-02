

// I Do't know what is the problem  in the code
// I Do't know what is the problem  in the code
// I Do't know what is the problem  in the code
// I Do't know what is the problem  in the code
// I Do't know what is the problem  in the code
// I Do't know what is the problem  in the code
// I Do't know what is the problem  in the code
// I Do't know what is the problem  in the code
// I Do't know what is the problem  in the code
// I Do't know what is the problem  in the code


#include <stdio.h>
#include <string.h>
struct driver
{
    char name[43];
    char dlNo[34];
    char route[33];
    float kms;
};

int main()
{
    typedef struct driver d;
    d d1, d2, d3;

    for (int i = 1; i <= 3; i++)
    {

        printf(" \n");
        printf("Enter the Details of the Drivers : \n");
        printf("Enter the Details of Driver %d \n\n",i);
        printf("Enter the Name of Driver \n");
        scanf("%s", &d1.name);
        printf("Enter the dlNo of Driver \n");
        scanf("%s", &d1.dlNo);
        printf("Enter the route of Driver \n");
        scanf("%s", &d1.route);
        printf("Enter the kms of Driver  \n");
        scanf("%f", &d1.kms);
        printf(" \n");

    for (int i = 1; i <= 3; i++)
    {
        printf("The name of Driver is : %s\n", d1.name);
        printf("The dlNo of Driver is : %s\n", d1.dlNo);
        printf("The route of Driver is : %s\n", d1.route);
        printf("The kms of Driver is : %.2f\n\n", d1.kms);
    }
    }


    return 0;
};








// My Code
// My Code
// My Code
// My Code
// My Code
// My Code
// My Code
// My Code
// My Code
// My Code

// #include <stdio.h>
// #include <string.h>

// struct D
// {

// } d1, d2, d3;
// int main()
// {
//     char name[55];
//     char drivinglicineNo;
//     char route[55];
//     float kms;

//     printf(" \n");
//     printf("Enter Your Name : \n");
//     gets(name);

//     printf("Enter Your route \n");
//     gets(route);

//     printf(" Now, Enter Your Driving licine No. \n");
//     scanf("%d", &drivinglicineNo);

//     printf("Enter Your Daily kilometer : \n");
//     scanf("%.2f", &kms);

//     printf("Your Name is : %s");
//     puts(name);

//     printf("Your route is : %s");
//     puts(route);

//     printf("Your driving licene No. is : %d \n", drivinglicineNo);

//     printf("Your Daily kilometer reading is : %f \n", kms);

//     return 0;
// }










// Right Code
// Right Code
// Right Code
// Right Code
// Right Code
// Right Code
// Right Code
// Right Code
// Right Code
// Right Code
// Right Code
// Right Code


// #include<stdio.h>
// //structure define
// struct travelAgency
// {
//     char name[20];
//     char dlNo[30];
//     char route[20];
//     int kms;
// };

// int main()
// {
//     //variable declaration
//     struct travelAgency driver[4];
//     //welcome  message
//     printf("\n*****Welcome to our TRAVEL AGENCY please enter your details*****\n\n");
//     //store information using loop
//     for (int i = 1; i <= 3; i++)
//     {
//         printf("Enter Driver no %d Name:\n", i);
//         fflush(stdin);
//         gets(driver[i].name);

//         printf("Enter Driver no %d DL no:\n", i);
//         scanf("%s", driver[i].dlNo);

//         printf("Enter Driver no %d Route\n", i);
//         fflush(stdin);
//         gets(driver[i].route);

//         printf("Enter Driver no %d kms:\n", i);
//         scanf("%d", &driver[i].kms);

//         printf("\n");
//     }
//     //printing message
//     printf("\n*****Printing Details of Drivers*****\n\n");
//     //print using loop
//     for (int i = 1; i <= 3; i++)
//     {
//         printf("Driver no %d Name is:%s\n", i, driver[i].name);

//         printf("Driver no %d DL no is:%s\n", i, driver[i].dlNo);

//         printf("Driver no %d Route is:%s\n", i, driver[i].route);

//         printf("Driver no %d kms is:%d\n", i, driver[i].kms);

//         printf("\n");
//     }

//     return 0;
// }