#include <stdio.h>
#include <conio.h>
#define max 10
int stack[max];
int top = -1;

void push() {
    int value;
    if (top == max - 1)
        printf("Stack is overflow\n");
    else {
        printf("Enter the value: ");
        scanf("%d", &value);

        top++;

        stack[top] = value;

        printf("%d is pushed into stack\n", value);
    }
}
void display() {
    int i;

    if (top == -1)
        printf("Stack is underflow\n");
    else {
        printf("Stack data:\n");

        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}
void peek() {
    if (top == -1)
        printf("Stack is underflow\n");
    else
        printf("%d is on the top of stack\n", stack[top]);
}
int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return 0;
    }
    else {
        return stack[top--];
    }
}
int main() {
    int choise;
    while (1) {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Peek");
        printf("\n5. Exit");
        printf("\nEnter the choice: ");
        scanf("%d", &choise);
        switch (choise) {
            case 1:
                push();
                break;
            case 2:
                printf("%d is popped\n", pop());
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice\n");
        } }
    getch();
    return 0;
}