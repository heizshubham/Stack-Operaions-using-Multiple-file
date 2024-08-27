#include <iostream>
#include "stackDef.cpp"

using namespace std;

// Constructor to initialize stack
Stack::Stack() : top(-1) {}

// Check if the stack is empty
bool Stack::isEmpty() {
    return top == -1;
}

// Check if the stack is full
bool Stack::isFull() {
    return top == MAX_SIZE - 1;
}

// Push element onto stack
void Stack::push(int val) {
    if (isFull()) {
        cout << "Stack is full" << endl;
        return;
    }
    arr[++top] = val;
}

// Pop element from stack
int Stack::pop() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return -1; // Returning -1 to indicate an error
    }
    return arr[top--];
}

// Get the top element of the stack
int Stack::peek() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return -1; // Returning -1 to indicate an error
    }
    return arr[top];
}

// Display stack elements
void Stack::display() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Stack: ";
    for (int i = 0; i <= top; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

