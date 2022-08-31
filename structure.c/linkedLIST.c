#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insert(struct node *first, int val) // it is a pointer functionbecause it is equalised by a pointer
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = val;
    new->next = first;
    return new;
}
void display(struct node *first)
{
    while (first != NULL)
    {
        printf("%d ", first->data);
        first = first->next;
    }
}
int main()
{
    struct node *first = NULL;
    int n, val, r;
    printf("please enter how many eliment you want to enter : ");
    scanf("%d", &n);
    printf("\nenter the eliment line by line -->\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val);
        first = insert(first, val);
    }
    printf("IF YOU WANT DELETE ANY NODE PLEASE ENTER THE INDEX OF NODE: ");
    scanf("%d", &r);
    printf("\nthe linked list is -->\n");
    display(first);
}