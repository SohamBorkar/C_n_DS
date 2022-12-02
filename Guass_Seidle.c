// #include <stdio.h>
// #include<math.h>
// # define X = 2

// int main()
// {
//     float x [X] [X + 1], a[X], ae, max, t, s, e;
//     int i, j, r, mxit;
//     for (int i = 0; i < X; i++)
//     {
//         for (int  j = 0; j < X; j++)
//         {
//             scanf("%f",&x[i][j]);
//         }
        
//     }

//     printf("Enter the allowed error and maximum number of iteration: \n");
//     scanf("%f%d",&ae,&mxit);
//     printf("iteration\tx[1]\tx[2]\n");
//     for (int r = 1; r <= mxit; r++)    {
//         max=0;
//         for (int  i = 0; i < X; i++)
//         {
//             s=0;
//             for (int  j = 0; j < X; j++)
//             {
//                 if (j!=i);
//                 {
//                    s+=x[i][j]*a[j];
//                    t=(x[i][X]-s)/x[i][j];
//                    e= fabs(a[i]-t);
//                    a[i]=t;
//                 }
                
//                 printf("%5d\t \n",r);
//                 for (int  i = 0; i < X; i++)
//                 {
//                     printf("%9.4f\t",a[i]);
//                     printf("\n");
//                     if (max<ae)
//                     {
//                         printf("Converses in %3d iteration\n",r);
//                         for (int  i = 0; i < X; i++)
//                         {
//                             /* code */
//                         }
                        
//                     }
                    
//                 }
                
//             }
            
//         }
        
        
//     }
    
    
    
//     return 0;
// }