#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    struct node *head;
    unsigned int size;
} Stack;

typedef struct node
{
    char data;
    struct node *next;
} node;

void push(Stack *s, char val)
{
    node *holdst;
    holdst = (node *)malloc(sizeof(node));

    holdst->data = val;
    holdst->next = s->head;
    s->head = holdst;
    s->size++;
}

void print_stack_reverse(Stack *s)
{
    char rever[s->size];
    node *holdst = s->head;
    int i = 0;
    while (holdst != 0)
    {
        rever[i] = holdst->data;
        holdst = holdst->next;
        i++;
    }
    for (int i = s->size - 1; i >= 0; i--)
    {
        printf("%c", rever[i]);
    }
    printf("\n");
}

void pop(Stack *s)
{
    node *holdst = s->head;
    node *help = holdst;
    while (holdst != NULL)
    {
        holdst->data = holdst->data;
        holdst = holdst->next;
    }
    s->head = help->next;
    s->size--;
}

char top(Stack *s)
{
    return (s->head->data);
}
int main()
{
    Stack *s = malloc(sizeof(Stack));
    s->head = NULL;
    s->size = 0;
    char dummy[50];
    scanf("%s", dummy);
    for (int i = 0; i < 50; i++)
    {
        if (dummy[i] == '\0')
        {
            break;
        }
        push(s, dummy[i]);
    }
    print_stack_reverse(s);
    printf("I am top %c\n", top(s));
    pop(s);
    scanf("%s", dummy);
    for (int i = 0; i < 50; i++)
    {
        if (dummy[i] == '\0')
        {
            break;
        }
        push(s, dummy[i]);
    }
    printf("I am top %c\n", top(s));
    print_stack_reverse(s);

    return 0;
}
