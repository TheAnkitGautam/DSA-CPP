#include <iostream>
using namespace std;

class Queue
{
    int size, capacity, *arr;

public:
    Queue(int capacity)
    {
        this->capacity = capacity;
        size = 0;
        arr = new int[capacity];
    }

    ~Queue() { delete[] arr; }

    void enqueue(int x)
    {
        if (capacity == size)
            return;

        arr[size] = x;
        size++;
    }

    void dequeue()
    {
        if (size == 0)
            return;
        else
        {
            for (int i = 0; i < size - 1; i++)
                arr[i] = arr[i + 1];
            size--;
        }
    }

    int getFront()
    {
        if (isEmpty())
            return -1;

        return arr[0];
    }

    int getRear()
    {
        if (isEmpty())
            return -1;

        return arr[size - 1];
    }
    bool isEmpty() { return size == 0; }
    bool isFull() { return size == capacity; }
    int getSize() { return size; }
    int getCapacity() { return capacity; }
};

int main()
{
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << "Capacity: " << q.getCapacity() << endl;
    cout << "Size: " << q.getSize() << endl;
    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;
    cout << "isEmpty: " << q.isEmpty() << endl;
    cout << "isFull: " << q.isFull() << endl;

    return 0;
}