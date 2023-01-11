#include <stdio.h>

void push();
void pop();
void display();

int main()
{
    int size;
    int option, toadd, top = -1;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    while (1)
    {
        printf("1. Push \n");
        printf("2. Pop \n");
        printf("3. Display \n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Enter element: ");
            scanf("%d", &toadd);
            push(arr, toadd, size, top);
            break;

        case 2:
            pop(arr, top);
            break;

        case 3:
            display(arr, top);
            break;

        default:
            printf("Enter proper input\n");
            break;
        }
    }

    return 0;
}



void push(int *arr, int toadd, int size, int top)
{
    if (top == size)
        printf("stack overflow \n");

    else
        top++;
    arr[top] = toadd;
};

void pop(int *arr, int top)
{
    if (top == -1)
    {
        printf("stack underflow \n");
    }
    else
        top--;
};

void display(int *arr, int top)
{
    for (int i = top; i >= 0; i--)
        printf("%d, ", arr[i]);

    if (top == -1)
    {
        printf("Stack is empty \n");
    }
};