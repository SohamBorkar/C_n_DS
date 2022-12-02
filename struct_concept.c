// My question is What is mistake in the code below ?

// #include <stdio.h>
// #include<string.h>
// struct std
// {
//     int id;
//     float marks;
//     char name[];
// };


// int main()
// {
//     struct std ravi,soham,tejas;
//     struct std ravi = {56,76.88};
//     struct std soham = {77,88.32"};
//     struct std tejas = {82,0.43"};
//     strcpy(ravi.name,"It is Ravi Ade");
//     strcpy(soham.name,"It is Soham Borkar");
//     // strcpy(tejas.name,"It is Tejas Dhande");

//     // printf("Id, Mark and name of Ravi is %d, %f, %s respectly\n");

//     return 0;
// }


#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} harry, ravi, shubham; 

// OR we can also write as given below.

// struct Student harry, ravi, shubham;



void print()
{
    printf(" \n");

    printf("Id of harry is %d\n",harry.id);
    printf("Id of shubham is %d\n",shubham.id);
    printf("Id of ravi is %d\n\n",ravi.id);

    printf("marks of harry is %d\n",harry.marks);
    printf("marks of shubham is %d\n",shubham.marks);
    printf("marks of ravi is %d\n\n",ravi.marks);

    printf("fav_char of harry is %d\n",harry.fav_char);
    printf("fav_char of shubham is %d\n",shubham.fav_char);
    printf("fav_char of ravi is %d\n\n",ravi.fav_char);

    strcpy(harry.name, "Harry Potter student of the year");
    printf("Name of harry is %s\n",harry.name);

    strcpy(shubham.name, "Shubham Kumar");
    printf("Name of shubham is %s\n",shubham.name);

    strcpy(ravi.name,"It is Ravi");
    printf("Name of ravi is %s\n\n",ravi.name);

   
}

int main()
{
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 66;
    ravi.marks = 466;
    shubham.marks = 46;
    harry.fav_char = 'p';
    ravi.fav_char = 'y';
    shubham.fav_char = 'o';




    // My question is Why we can do not use the format given below written by me.


    // struct Student harry = {1,66,'p'};
    // struct Student shubham = {2,466,'y'};
    // struct Student ravi = {3,46,'o'};
    




    

    return 0;
}
