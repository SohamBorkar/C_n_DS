#include <stdio.h>
#include <string.h>

union Std
{
    int id;
    float marks;
    char fav_char;
    char name[34];
};
int main()
{
    // Program using "struct"

    // struct Std s1;
    // s1.id =5;
    // s1.marks =78;
    // s1.fav_char='u';
    // strcpy(s1.name,"Borkar");

    // printf(" The id of s1 is %d\n",s1.id );
    // printf(" The marks of s1 is %.2f\n",s1.marks );
    // printf(" The fav_char of s1 is %c\n",s1.fav_char );
    // printf(" The name of s1 is %s\n",s1.name );









    // Program using "union"

    // I don't know Why this "union" is not working properly ?
    // I don't know Why this "union" is not working properly ?
    // I don't know Why this "union" is not working properly ?
    // I don't know Why this "union" is not working properly ?
    // I don't know Why this "union" is not working properly ?
    // I don't know Why this "union" is not working properly ?
    // I don't know Why this "union" is not working properly ?



    union Std s1;
    s1.id = 5;
    s1.marks = 78;
    s1.fav_char = 'u';
    strcpy(s1.name, "Borkar");

    printf(" The name of s1 is %s\n", s1.name);
    printf(" The fav_char of s1 is %c\n", s1.fav_char);
    printf(" The marks of s1 is %.2f\n", s1.marks);
    printf(" The id of s1 is %d\n", s1.id);

    return 0;
}