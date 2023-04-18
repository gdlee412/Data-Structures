#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct stack
{
    int arr[MAX];
    int top;
}STACK;

void createStack(STACK*s)
{
    s -> top = -1;
}

int stackEmpty(STACK*s)
{
    if(s -> top == -1)
    {
        return(1);
    }
    else
        return(0);
}

int stackFull(STACK*s)
{
    if(s -> top == MAX - 1)
    {
        return(1);
    }
    else
        return(0);
}

void push(STACK*s, int item)
{
    if(stackFull(s))
    {
        printf("\nStack is full.");
        return;
    }
    s -> top++;
    s -> arr[s -> top] = item;
}

int pop(struct stack *s)
{
    int item;
    if(stackEmpty(s))
    {
        printf("\nStack is empty.");
        return(-1);
    }
    item = s -> arr[s -> top];
    s -> top--;
    return item;
}

int minStack(STACK*s)
{
    int min = 10000;
    for(int i = 0; i < MAX; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
}

int main()
{
    STACK* top;
    top = NULL;
    int ch = 0;
    int item;
     while (ch != 4) 
     {
        printf("1. Create Stack \n2. Push\n3. Pop\n");
        scanf("%d", &ch);
        if (ch == 1) 
        {
        }
        else if (ch == 2) 
        {
            printf("Input Number : ");
            scanf("%d", &item);
            push(&top, item);
        }
        else if (ch == 3)
        {
        	pop(&top);
		}
        else if (ch == 4)
        {
            minStack(STACK*s);
        }
    }
}