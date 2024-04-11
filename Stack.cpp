#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack() 
{
    topPtr = nullptr;
}

Stack::~Stack() 
{
    clear();
}

void Stack::push(int value)
{
    StackNode* newNode = new StackNode;

    newNode->value = value;

    newNode->next = topPtr;

    topPtr = newNode;
}

int Stack::pop() 
{
    if (isEmpty()) 
    {
        std::cerr << "Error: Stack is empty\n";

        return -1;
    }
    StackNode* temp = topPtr;

    int value = temp->value;

    topPtr = topPtr->next;

    delete temp;

    return value;
}

bool Stack::isEmpty() const 
{
    return topPtr == nullptr;
}

void Stack::clear()
{
    while (!isEmpty()) 
    {
        pop();
    }
}

void Stack::display() 
{
    StackNode* current = topPtr;

    while (current != nullptr) 
    {
        std::cout << current->value << " ";

        current = current->next;
    }
    cout << endl;
}
