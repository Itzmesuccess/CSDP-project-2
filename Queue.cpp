#include "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue() 
{
    frontPtr = nullptr;
    rearPtr = nullptr;
}

Queue::~Queue() {
    clear();
}

void Queue::enqueue(int value)
{
    QueueNode* newNode = new QueueNode;

    newNode->value = value;

    newNode->next = nullptr;

    if (isEmpty()) 
    {
        frontPtr = newNode;
    }
    else {
        rearPtr->next = newNode;
    }
    rearPtr = newNode;
}

int Queue::dequeue() 
{
    if (isEmpty()) 
    {
        cerr << "Error: Queue is empty\n";

        return -1;
    }

    QueueNode* temp = frontPtr;

    int value = temp->value;

    frontPtr = frontPtr->next;

    delete temp;

    if (frontPtr == nullptr) 
    {
        rearPtr = nullptr;
    }
    return value;
}

bool Queue::isEmpty() const 
{
    return frontPtr == nullptr;
}

void Queue::clear() 
{
    while (!isEmpty()) 
    {
        dequeue();
    }
}

void Queue::display() 
{
    QueueNode* current = frontPtr;

    while (current != nullptr) 
    {
        std::cout << current->value << " ";

        current = current->next;
    }

    cout << endl;
}
