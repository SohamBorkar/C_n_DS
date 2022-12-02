// #include <stdio.h>

// void changeValue(int* address)
// {
//     *address = 37565;
// }

// int main()
// {
//     int a = 34, b =56;
//     printf("The value of a now is %d\n", a);
//     changeValue(&a);
//     printf("The value of a now is %d\n\n", a);


//     return 0;
// }


// // Quick Quiz:
// // Given two numbers a and b,  add them then subtract them and assign them to a and b using call by reference.

// // a = 4
// // b = 3

// // after running the function, the values of a and b should be:
// // a = 7
// // b = 1



    // Example of "Call by Value"
    
    // #include <stdio.h>
    // int add(int x, int y)
    // {    
    //     return x +  y;
    // }
    // int main()
    // {
    //     int a=3, b=2;
    //     int add(int a,int b);
    //     return 0;
    // }


    // Example of "Call by Reference"

    // #include <stdio.h>
    // int main()
    // {
    //     int a=3, b=2, temp;
    //     printf("The value of a is %d and value of b is%d \n",a,b);
    //     temp=a;
    //     a=b;
    //     b=temp;
    //     printf("The value of a is %d and value of b is %d \n",a,b);
    //     return 0;
    // }

    // OR
     // Example of "Call by Reference"
      // Example of "Call by Reference"
       // Example of "Call by Reference"
        // Example of "Call by Reference"
         // Example of "Call by Reference"
          // Example of "Call by Reference"  

          
    #include <stdio.h>

    // Function defination to swap the values
    void swap(int*x, int* y)
    {
        int temp;
        temp=*x; //temp become x
        *x=*y;  //y is put into x
        *y=temp; //put temp into x
    }
    int main()
    {
        int a=34,b=74;
        printf("%d and %d \n",a,b);
        swap(&a,&b);
        printf("%d and %d \n",a,b);
        return 0;
    }
