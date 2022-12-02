#include <stdio.h>
#include<string.h>
int main()
{
    char s1[]= "Soham";
    char s2[]= "Tejas";
    char s3[20];

    printf(" \n");

    puts(strcat(s1,s2));


    printf("The length of s1 is %d \n", strlen(s1));
    printf("The length of s2 is %d \n", strlen(s2));


    printf("Reverse of the s1 is: ");
    puts(strrev(s1));

    printf("Reverse of the s2 is: ");
    puts(strrev(s2));


    strcpy (s3,strcat(s1,s2));
    puts (s3);


    printf("The strcmp of s1 and s2 is %d",strcmp(s1,s2));
    
    // Here SKII difference is 1 beacuse 't' of Tejas comes after 's' of Soham. It may be '-' (minus) also, and also it may be less than '-1' also.

    return 0;
}



// Below is a quick quiz 
// Below is a quick quiz 
// Below is a quick quiz 
// Below is a quick quiz 
// Below is a quick quiz 
// Below is a quick quiz 
// Below is a quick quiz 
// Below is a quick quiz 
// Below is a quick quiz 
// Below is a quick quiz 







// #include <stdio.h>
// #include<string.h>

// int main()
// {
//     char s1[20];
//     char s2[20];
//     char s3[]="is a friend of ";
//     char s4[40];
    
//     printf("Enter the string 1 \n");
//     gets(s1);
//     printf("Enter the string 2 \n");
//     gets(s2);

//     printf(strcat(s1, strcat(s3, s2)));
//     // OR
//     // printf("%s is a freind of %s\n", s1, s2);



//     // strcpy(s3,strcat(s1,s2));
//     // strcpy(s3,strcat(s1,s2));

//     // printf(" \n",(s3,strcat (s3), strcat(s1,s2)));
//     // puts(s3);

//     return 0;
// }

