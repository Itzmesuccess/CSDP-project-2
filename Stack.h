#ifndef STACK_H
#define STACK_H

using namespace std;

class Stack {

private:

    struct StackNode {

        int value;

        StackNode* next;
    };

    StackNode* topPtr;

public:

    Stack();
    ~Stack();

    void push(int value);

    int pop();

    bool isEmpty() const;

    void clear();

    void display();
};

#endif // STACK_H
