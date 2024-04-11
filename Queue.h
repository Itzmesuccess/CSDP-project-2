#ifndef QUEUE_H
#define QUEUE_H

using namespace std;

class Queue 
{
private:
    struct QueueNode {

        int value;

        QueueNode* next;
    };

    QueueNode* frontPtr;
    QueueNode* rearPtr;

public:

    Queue();
    ~Queue();

    void enqueue(int value);
    int dequeue();
    bool isEmpty() const;
    void clear();
    void display();
};

#endif // QUEUE_H
