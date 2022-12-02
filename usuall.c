#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int* ptr;
    int n;
    char input;
    printf("Enter the length of your id \n");
    scanf("%d",&n);

    ptr = (int*) calloc(3, sizeof(int));
    for (size_t i = 0; i < 3; i++)
    {
        printf("Enter your id here : \n");
        scanf("%s",&ptr[i]);
    }

    for (size_t i = 0; i < 3; i++)
    {
        printf("Your id is %s : \n",ptr[i]);
    }
    
    

    
    return 0;
}