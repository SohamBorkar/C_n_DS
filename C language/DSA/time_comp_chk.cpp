#include <iostream>
#include <vector>
#include <ctime>
#include <time.h>
#include <iomanip>
#include <algorithm>
using namespace std;

void bubblesort(int *A, int n)
{
    int temp;
    int issorted = 0;
    printf("\n");

    for (int i = 0; i < n - 1; i++)
    {
        issorted = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                issorted = 0;
            }
        }
        if (issorted)
        {
            return;
        }
    }
}

void insertionsort(int *A, int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}

void merge(int arr[], int l, int m, int r)
{
    int k;
    int n1 = (l + 1) - m;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i, j = 0;

    k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        arr[i] = n - i;

    /*
    time_t start_t = clock();
    bubblesort(arr, n);
    time_t end_t = clock();
    cout << "time for bubble sort: " << end_t - start_t << endl;

    start_t = clock();
    insertionsort(arr, n);
    end_t = clock();
    cout << "time for insertion sort: " << end_t - start_t << endl;

    start_t = clock();
    mergeSort(arr, 0, n - 1);
    end_t = clock();
    cout << "time for merge sort: " << end_t - start_t << endl;
    */

    time_t start, end;
    time(&start);
    ios_base::sync_with_stdio(false);
    bubblesort(arr, n);
    time(&end);
    double time_taken = double(end - start);
    cout << "Time taken by bubble sort is : " << fixed << time_taken << setprecision(5) << endl;

    time(&start);
    ios_base::sync_with_stdio(false);
    mergeSort(arr, 0, n - 1);
    time(&end);
    time_taken = double(end - start);
    cout << "Time taken by merge sort is : " << fixed << time_taken << setprecision(5) << endl;

    time(&start);
    ios_base::sync_with_stdio(false);
    insertionsort(arr, n);
    time(&end);
    time_taken = double(end - start);
    cout << "Time taken by insertion sort is : " << fixed << time_taken << setprecision(5) << endl;

    return 0;
}

/*
#include<iostream>
#include <vector>

using namespace std;

void bubblesort(vector<int> & A, int n){
    int temp;
    int issorted = 0;
    printf("\n");

    for (int i = 0; i < n - 1; i++)
    {
        issorted = 1;
        for (int  j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                issorted = 0;
            }

        }
        if (issorted)
        {
            return;
        }
    }
}

void insertionsort(vector<int> & A, int n){
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }

}

void merge(int arr[], int l, int m, int r)
{
    int k;
    int n1 = (l + 1) - m;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i,j = 0;

    k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}



int main(){
    int n;
    cin >> n;

    vector<int> arr(n,0);

    for(int i = 0; i < n; i++)
        arr[i] = n - i;

    bubblesort(arr, n);
    insertionsort(arr, n);
    mergeSort(arr, 0, n-1);
    return 0;
}

*/