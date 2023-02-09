#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value)
{
    if (top == MAX_SIZE - 1)
    {
        printf("Error: Stack overflow\n");
    }
    else
    {
        top++;
        stack[top] = value;
        
    }
    
}

int main()
{
    push(10);
    push(20);
    push(30);
    for (int i=0;i<=top;i++)
    {
        
        printf("%d\n",stack[i]);
    }
    return 0;
}
