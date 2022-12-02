// //      #include <stdio.h>
// // int main()
// // {
// //     int n;
// //     printf("Enter the number upto which you want number be executed \n");
// //     scanf("%d",&n);
// //     printf(" \n");
// //     for (int i = 0; i <= n; i++)
// //     {
// //         printf("%d \n",i);
// //     }
// //     return 0;
// // }








// #include <stdio.h>
// #include <string.h>

// //Why do you even need this
// /*
// struct D
// {

// } d1, d2, d3;
// */

// int main()
// {
//     char name[12];
//     char drivinglicineNo[10];
//     char route[12];
//     float kms;

//     printf("\n");
//     printf("Enter Your Name : ");
//     gets(name);

//     printf("\nEnter Your route: ");
//     gets(route);

//     printf("\nNow, Enter Your Driving license No: ");
//     scanf("%s", &drivinglicineNo);
    
//     printf("\nEnter Your Daily kilometer: ");
//     // scanf("%.2f", &kms);  You are not printing you asking for floating point value from the user so, 
//     // only %f not %.2f
//     scanf("%f", &kms);
    

//     // printf("Your Name is : %s");
//     printf("\nYour Name is : ");
//     puts(name);

//     // printf("Your route is : %s");
//     printf("Your route is : ");
//     puts(route);

//     printf("Your driving licence No. is : %s \n", drivinglicineNo);

//     // printf("Your Daily kilometer reading is : %f \n", kms);
//     printf("Your Daily kilometer reading is : %.2f \n", kms);

//     return 0;
// }


#include <stdio.h>
#include <string.h>

// struct D
// {

// } d1, d2, d3;
int main()
{
    char name[55];
    int drivinglicineNo;
    char route[55];
    float kms;

    printf(" \n");
    printf("Enter Your Name : \n");
    gets(name);

    printf("Enter Your route \n");
    gets(route);

    printf(" Now, Enter Your Driving licine No. \n");
    scanf("%d", &drivinglicineNo);
    
    printf("Enter Your Daily kilometer : \n");
    scanf("%f", &kms);
    


    printf("\nYour Name is : ");
    puts(name);

    printf("\nYour route is : ");
    puts(route);

    printf("Your driving licene No. is : %d \n", drivinglicineNo);

    printf("Your Daily kilometer reading is : %.2f \n", kms);

    return 0;
}
