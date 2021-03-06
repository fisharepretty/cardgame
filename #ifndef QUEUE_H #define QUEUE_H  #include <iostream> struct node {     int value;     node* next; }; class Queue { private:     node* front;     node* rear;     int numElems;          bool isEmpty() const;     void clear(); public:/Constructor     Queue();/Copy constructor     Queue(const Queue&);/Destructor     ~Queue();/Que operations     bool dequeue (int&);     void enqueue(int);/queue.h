#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
struct node
{
    int value;
    node* next;
};
class Queue
{
private:
    node* front;
    node* rear;
    int numElems;
    
    bool isEmpty() const;
    void clear();
public:
    // Constructor
    Queue();
    
    // Copy constructor
    Queue(const Queue&);
    
    // Destructor
    ~Queue();
    
    // Que operations
    bool dequeue (int&);
    void enqueue(int);
    
    // Overloaded assignment operator
    void operator=(const Queue &right);

};


#endif
