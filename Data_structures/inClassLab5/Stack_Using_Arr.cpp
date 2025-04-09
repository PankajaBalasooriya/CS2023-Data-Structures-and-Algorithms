#include <iostream>
#include <chrono>

#define MAX 100

class Stack {
private:
    int top;
    int arr[MAX];

public:
    Stack() { top = -1; }

    bool isEmpty() {
        return top == -1;
    }

    void push(int data) {
        if (top >= MAX - 1) {
            std::cout << "Stack Overflow" << std::endl;
            return;
        }
        arr[++top] = data;
    }

    void pop() {
        if (isEmpty()) {
            std::cout << "Stack Underflow" << std::endl;
            return;
        }
        top--;
    }

    int stackTop() {
        if (isEmpty()) {
            std::cout << "Stack is empty" << std::endl;
            return -1;
        }
        return arr[top];
    }

    void display() {
        if (isEmpty()) {
            std::cout << "Stack is empty" << std::endl;
            return;
        }
        for (int i = top; i >= 0; i--) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Stack myStack;
    auto start = std::chrono::high_resolution_clock::now();

    // Push operations
    myStack.push(8);
    myStack.push(10);
    myStack.push(5);
    myStack.push(11);
    myStack.push(15);
    myStack.push(23);
    myStack.push(6);
    myStack.push(18);
    myStack.push(20);
    myStack.push(17);
    myStack.display();

    // Pop 5 times
    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.display();

    // Push additional elements
    myStack.push(4);
    myStack.push(30);
    myStack.push(3);
    myStack.push(1);
    myStack.display();

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Execution Time (Array Stack): " << duration.count() << " seconds" << std::endl;

    return 0;
}
