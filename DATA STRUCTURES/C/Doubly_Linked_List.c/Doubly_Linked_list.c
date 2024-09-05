#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};


int main() {
    struct node* head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    struct node* ptr;
    head->data = 10;
    head->prev = NULL;
    head->next = NULL;


    ptr = head;
    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}
