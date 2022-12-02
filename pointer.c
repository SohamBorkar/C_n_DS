#include <stdio.h>
int main(int argc, char const *argv[])
{
    //      %x shows the hexadecimal value 
   //      %p shows the address of pointer as *void
 
    int a= 55;
    int* ptra = &a;

    printf("1. The value of a is %d\n",a);  
    printf("2. The value of a using *ptra is %d\n",*ptra);
    printf("3. The address of a using & is %d\n",&a);
// There is a difference of 4 bytes in &a and &ptra i.e. it shows this is 64 bit articture it mens it need 4 bytes to store the value.
    printf("4. The address of ptra using & is %d\n",&ptra);

// To know anything about 'a' it is compulsary to specify it by ' *ptra ' or 'a'

    printf("5. The value of a using %%p is %p\n",*ptra);
    printf("6. The value of a using %%x is %x\n",*ptra);
    printf("7. The address of ptra using %%p is %p\n",ptra);
    printf("8. The address of ptra using hexadecimal is %x\n",ptra);

    // Now null pointer 

    int b= NULL;
    int* ptrb= &b;
    printf("The value of b is %d\n",*ptrb);

    // Here 'b' is a NULL pointer . It means it contain nothing means 0;
    
    return 0;
}

