#include <stdio.h>
#include <stdbool.h>

#define MAX 5 // Example max capacity for the stack

// Define the stack structure
typedef struct {
	int items[MAX];
	int top;
} Stack;

// Initialise the stack by setting the top to -1
void initStack(Stack *s) {
	s->top = -1;
}

// Check if stack is full
bool isFull(Stack *s) {
	return s->top == MAX - 1;
}

// Check if stack is empty
bool isEmpty(Stack *s) {
	return s->top == -1;
}

// Add an element to the top of the stack
void push(Stack *s, int value) {
	if (isFull(s)) {
		printf("Stack overflow! Cannot push %d.\n", value);
		return;
	}
	s->items[++s->top] = value;
	printf("Pushed %d onto the stack.\n", value);
}

// Remove and return the top of the stock
int pop(Stack *s) {
	if (isEmpty(s)) {
		printf("Stack underflow! Nothing to pop.\n");
		return -1;  // Return an error sentinel value
	}
	return s->items[s->top--];
}

// Return the top element without removing it.
int peek(Stack *s) {
	if (isEmpty(s)) {
		printf("Stack is empty.\n");
		return -1;
	}
	return s->items[s->top];
}

// Driver program to test the stack implementation
int main() {
	Stack myStack;
	initStack(&myStack);
	
	push(&myStack, 10);
	push(&myStack, 20);
	push(&myStack, 30);
	
	printf("Top element is %d\n", peek(&myStack));
	
	printf("Popped element: %d\n", pop(&myStack));
	printf("Popped element: %d\n", pop(&myStack));
	
	if (isEmpty(&myStack)) {
		printf("The stack is empty now.\n");
	} else {
		printf("The stack is not empty.\n");
	}
	
	return 0;
}
