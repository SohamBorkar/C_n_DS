#include <stdio.h>

void push(int *arr, int size, int top, int toadd)
{
    if (top == size - 1)
        printf("Stack overflow...\n");
    else
        top++;
    arr[top] = toadd;
};

void pop(int *arr, int toadd, int top)
{
    if (top == -1)
        printf("Stack underflow... \n");
    else
        top--;
};

void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == "\0")
        {
            printf("empty");
        }
        else
            printf("%d ", arr[i]);
    }
};

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    int top = 0;
    int choice;
    int toadd;

    while (1)
    {
        printf("Press 1 to Push an element to Stack \n");
        printf("Press 2 to Pop an element from Stack \n");
        printf("Press 3 to display Stack \n");
        printf("Press 4 to exit Program \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter element to add in stack: ");
            scanf("%d", &toadd);
            push(arr, size, top, toadd);
            break;

        case 2:
            // pop();
            break;

        case 3:
            display(arr, size);
            break;

        default:
            printf("Enter valid choice... \n");
            break;

        printf(" \n");
        }
    }

    return 0;
}