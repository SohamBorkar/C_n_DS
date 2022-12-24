#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

void linkedlist_traversal(struct Node * ptr){
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    
}

int main()
{
    struct Node * head;
    struct Node * first;
    struct Node * second;
    struct Node * third;
    struct Node * forth;

    // Allocating memory for nodes in the linked list in heap
    head = (struct Node *) malloc(sizeof (struct Node));
    first = (struct Node *) malloc(sizeof (struct Node));
    second = (struct Node *) malloc(sizeof (struct Node));
    third = (struct Node *) malloc(sizeof (struct Node));
    forth = (struct Node *) malloc(sizeof (struct Node));

    //now linking nodes:
    // linking first and second node
    head -> data = 7;
    head -> next = second;

    // Linking second and third node
    second -> data = 41;
    second -> next = third;

    // Linking third and forth node
    third -> data = 56;
    third -> next = forth;

    // Linking NULL to forth node / last node
    forth -> data = 78;
    forth -> next = NULL;

    linkedlist_traversal(head);

    return 0;
}