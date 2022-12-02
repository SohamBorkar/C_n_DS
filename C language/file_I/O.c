#include <stdio.h>
int main()
{       
    // AlSO DON'T FORGOT TO CHANGE THE MODE AND COMMENT, UNCOMMENT THE LINES.

    FILE *ptr = NULL;
    ptr = fopen("happy.txt","r");

    // Change mode 'r' to 'w' when shifting from "getc" and "gets" to "putc" and "puts".



    // Below is the getting the charactor from the file happy.txt that we created and linked that file to this file.

    char c = fgetc(ptr);
    printf("The charactor I read was :  %c\n",c);

     c = fgetc(ptr);
    printf("The charactor I read was :  %c\n",c);

     c = fgetc(ptr);
    printf("The charactor I read was :  %c\n",c);

     c = fgetc(ptr);
    printf("The charactor I read was :  %c\n",c);

     c = fgetc(ptr);
    printf("The charactor I read was :  %c\n",c);

     c = fgetc(ptr);
    printf("The charactor I read was :  %c\n",c);

      c = fgetc(ptr);
    printf("The charactor I read was :  %c\n",c);

      c = fgetc(ptr);
    printf("The charactor I read was :  %c\n",c);

      c = fgetc(ptr);
    printf("The charactor I read was :  %c\n",c);

      c = fgetc(ptr);
    printf("The charactor I read was :  %c\n",c);

      c = fgetc(ptr);
    printf("The charactor I read was :  %c\n",c);

      c = fgetc(ptr);
    printf("The charactor I read was :  %c\n",c);

// NOTE : Here getc gets single charactor every time also with white spaces and signs, and after getting all the charactors it fills with the white spaces.


 // Do not forgot comment and uncomment the part of file that you do not want.




    // // Below is the gets function
    // char str[55] ;
    // fgets(str,8,ptr);
    // // Herer 8 is number of charactors that shown in the string.
    // printf("The string is : %s \n",str);

    // NOTE :  Here \0 is considered as the last charactors, as considered as in the arrays.


    // Below is the fputc :
    // For fputc and fputs we have to chage the mode to 'w' (write) from 'r' (read).


    // fputc('^',ptr);
    
    
    // Here space after the charactor is considered as another charactor, so to give the space after charactor, you should give space in below's code, otherwise it shows 'error'.
    // Here we can use any sign, number or charactor. 







    // Below is fputs :


    // fputs("This is boy Harry !",ptr);



    // To give the space after above's charactor you should give space after " in fputs.



    // Below are the MODS

    // If we use 'r+' then the program adds original content and content given by 'fputc' and 'fputs' and shows all the data or content.

    // If we use 'w+' then the program then all the previous data that we entered in the file get erased, and new data is created from the above 'fputc' and 'fputs'.

    // If we use 'a+' then the program then new content is added in the previous content of the file, and if we run program multiple times then the previous content is added multiple times.
    



    




    fclose(ptr);

    // printf("Now using fputc in write mode is : %c \n",ptr);
    return 0;
}