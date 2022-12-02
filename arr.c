#include <stdio.h>
int main()
{
     int marks[4],n; 



    //  OR we can also write as:
     //int marks[4]={65,4,77,4};




    start:
     for (int i = 1; i <=4; i++)
     {
         printf("Enter the value of %d element of the array\n ",i);
         scanf("%d",&marks[i]);         
     }
    
    for (int i = 1; i <= 4; i++)
    {
        printf("The value of %d element of array is %d\n",i,marks[i]);
    }



    // OR we can also write as :

    // for (int i=1; i <=4; i++)
    // {
    //     printf("Enter the value of %d element of the array \n",i);
    //     scanf("%d",&marks[i]);

    //     printf("The value of %d element of array is %d\n\n\n",i,marks[i]);
    // }
    



    printf("If you want to run this code again, then press 1 for it:\n and if you want to exit from this loop then enter 2:\n");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
    if (n==1)
    {
        goto start;
        // start is at after decleration of variables.
    }
        break;

        case 2:
        if (n==2)
        {
            goto exit;
            // exit is at end.
        }
        
    
    default:
    printf("Enter valid input:\n");
        break;
    }

    exit:


    return 0;
}
