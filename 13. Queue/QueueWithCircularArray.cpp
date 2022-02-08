#include <iostream>
using namespace std;

class Queue
{
    int front, rear, capacity, *arr;

public:
    Queue(int capacity)
    {
        this->capacity = capacity;
        front = rear = -1;
        arr = new int[capacity];
    }

    ~Queue() { delete[] arr; }

    void enqueue(int x)
    {
        if ((rear + 1) % capacity == front)
            return;

        if (front == -1)
            front = 0;

        rear = (rear + 1) % capacity;
        arr[rear] = x;
    }

    void dequeue()
    {
        if (front == -1)
            return;

        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % capacity;
    }

    int getFront()
    {
        if (rear == -1)
            return -1;

        return arr[front];
    }

    int getRear()
    {
        if (rear == -1)
            return -1;

        return arr[(front + rear - 1) % capacity];
    }

    int getSize() { return rear; }
    int getCapacity() { return capacity; }
    bool isEmpty() { return rear == -1; }
    bool isFull() { return capacity == rear; }
};

int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.dequeue();

    cout << "Capacity: " << q.getCapacity() << endl;
    cout << "Size: " << q.getSize() << endl;
    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;
    cout << "isEmpty: " << q.isEmpty() << endl;
    cout << "isFull: " << q.isFull() << endl;

    return 0;
}