#include <stdio.h>
#include <stdlib.h>

int tos = -1;
int n;
int stack[100];

void push() {
    int element;
    printf("Enter the element to be pushed into the stack: ");
    scanf("%d", &element);
    if (tos == (n - 1)) {
        printf("Stack Overflow\n");
    } else {
        tos++;
        stack[tos] = element;
    }
}

void pop() {
    if (tos == -1) {
        printf("Stack underflow\n");
    } else {
        int item = stack[tos];
        tos--;
        printf("The popped element is %d\n", item);
    }
}

void display() {
    if (tos == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= tos; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    printf("Enter the max no of elements in the stack: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid stack size. Please enter a value between 1 and 100\n");
        return 1;
    }

    int ch;
    do {
        printf("\nSelect the options for performing various tasks:\n");
        printf("1. Insert elements\n2. Delete elements\n3. Display the stack\n4. Exit\n");
        printf("Select: ");
        scanf("%d", &ch);
        switch (ch) {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            printf("Invalid choice\n");
            break;
        }
    } while (ch != 4);

    return 0;
}
