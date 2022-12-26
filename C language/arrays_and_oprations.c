#include<stdio.h>

void print_arr(double arr[], int n);
void rev_arr(double arr[],int n);
double arr_sum(double arr[],int n);

int main()
{
    int n;
    printf("Enter the number of terms of an array: ");
    scanf("%d",&n);

    double arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d term of an array: ",i);
        scanf("%lf",&arr[i]);
    }
    

    print_arr(arr, n);
    printf("Sum = %.2lf\n",arr_sum(arr,n));
    printf("Avrage = %.2lf\n",arr_sum(arr,n)/n);
    rev_arr(arr,n);
    printf("Reverse ");
    print_arr(arr, n);
    return 0;
}

void print_arr(double arr[], int n) {
    printf("Array={ ");
    for (int i = 0; i < n; i++)
    {
        printf("%.3lf", arr[i]);
        if (i<(n-1))
        {
            printf(", ");
        }

    }
    printf(" }\n");
}

void rev_arr(double arr[],int n){
    int temp;
    for (int i = 0; i < (n/2); i++)
    {
        temp=arr[i];
        arr[i]=arr[(n-1)-i];
        arr[(n-1)-i]=temp;
    }
}

double arr_sum(double arr[],int n){
    double sum=0;
    for (int  i = 0; i < n; i++)
    {
        sum = arr[i]+sum;
    }
    return sum;
}