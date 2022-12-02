#include <stdio.h>
int main()
{
    int a = 5;
    int* ptra = &a;
                        // OR   
    // char a = '5';
    // char* ptra = &a;
    
//char takes 1 bytes and int takes 4 bytes as pre my articture (mostly take this type of storage in 64 bit articture). So output differs as 1 byte and 4 bytes.

    

    printf("%d\n",a);   

    // Here we do not write a++ or a-- in a printf line,we have to write it in different line. We can write it in for loop.
    a++;
    printf("%d\n",a);   
    a--;
    printf("%d\n",a);  

    printf("%d\n",a+1);   
    printf("%d\n\n",a-1); 


    printf("%d\n",&ptra);   
    printf("%d\n",*ptra);  
// problem starts from here
// Problem is not solving by using ' *ptra ++'or ' *ptra--'. Still output is same.

    ptra++;
    printf("%d\n",*ptra);
    ptra--;
    printf("%d\n",*ptra);   

// Problem ends here
    printf("%d\n",*ptra+1);    
    printf("%d\n\n",*ptra-1);   

               // This is the main part of this whole code.
    printf("%d\n",ptra);
    ptra++;   
    printf("%d\n",ptra);
    ptra--;   
    printf("%d\n",ptra);   
    printf("%d\n",ptra+1);   
    printf("%d\n\n",ptra-1);   

    // Here if we write "ptra++"" or "ptra--" then the value is added or substracted from preceding number and if we write "ptra+1" or "ptra-1" then the value that taken for opration is the original value that is given by us at starting.  




    return 0;
}