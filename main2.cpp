#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;

//convert decimal to binary (stack)
void decimalToBinaryStack(int decimal)
{
    Stack stack;

    while (decimal > 0) 
    {
        stack.push(decimal % 2);

        decimal /= 2;
    }

    cout << "Binary representation using stack: ";

    while (!stack.isEmpty()) 
    {
        cout << stack.pop();
    }
    cout << endl;
}

// convert decimal to binary (queue)

void decimalToBinaryQueue(double decimal) 
{
    Queue queue;

    while (decimal > 0) 
    {
        decimal *= 2;

        int bit = decimal;

        queue.enqueue(bit);

        decimal -= bit;
    }
    cout << "Binary representation using queue: ";

    while (!queue.isEmpty())
    {
        cout << queue.dequeue();
    }
    cout << endl;
}

int main() 
{
    int integerPart;

    double decimalPart;

    cout << "Enter a decimal number: ";

    cin >> integerPart >> decimalPart;

    // Convert integer part to binary using stack
    decimalToBinaryStack(integerPart);

    // Convert decimal part to binary using queue
    decimalToBinaryQueue(decimalPart);

    return 0;
}
