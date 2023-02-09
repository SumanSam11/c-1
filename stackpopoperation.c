#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Stack {
  int top;
  int data[MAX_SIZE];
};

void push(struct Stack *s, int value) {
  if (s->top == MAX_SIZE - 1) {
    printf("Stack overflow\n");
    return;
  }
  s->top++;
  s->data[s->top] = value;
}

int pop(struct Stack *s) {
  if (s->top == -1) {
    printf("Stack underflow\n");
    return -1;
  }
  int value = s->data[s->top];
  s->top--;
  return value;
}

int main() {
  struct Stack s;
  s.top = -1;

  push(&s, 10);
  push(&s, 20);
  push(&s, 30);
  push(&s, 40);

  printf("Popped item: %d\n", pop(&s));
  printf("Popped item: %d\n", pop(&s));
  printf("Popped item: %d\n", pop(&s));
  printf("Popped item: %d\n", pop(&s));
  return 0;
}
