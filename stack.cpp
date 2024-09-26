#include <iostream>
using namespace std;

#define MAX 1000 // Max size of the stack

class Stack {
    int top;

public:
    int arr[MAX]; // Array to store element

    Stack() { top = -1; } // Constructor initializes the top index to -1

    // Function to push
    bool push(int x) {
        if (top >= (MAX - 1)) {
            cout << "Stack Overflow\n";
            return false;
        } else {
            arr[++top] = x;
            cout << x << " pushed into stack\n";
            return true;
        }
    }

    // Function to pop
    int pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return 0;
        } else {
            int x = arr[top--];
            return x;
        }
    }

    // Function to peek
    int peek() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return 0;
        } else {
            int x = arr[top];
            return x;
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.pop() << " popped from stack\n";

    cout << "Top element is: " << s.peek() << endl;

    cout << "Stack is empty: " << s.isEmpty() << endl;

    return 0;
}
