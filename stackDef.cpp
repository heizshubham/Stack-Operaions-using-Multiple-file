#include<iostream>

using namespace std;


#define MAX_SIZE 100

class Stack {
private:
    int top;
    int arr[MAX_SIZE];

public:
    Stack();                // Constructor
    bool isEmpty();         // Check if stack is empty
    bool isFull();          // Check if stack is full
    void push(int val);     // Push element onto stack
    int pop();              // Pop element from stack
    int peek();             // Get the top element
    void display();         // Display stack elements
};
