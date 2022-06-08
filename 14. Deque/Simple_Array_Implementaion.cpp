#include <iostream>
using namespace std;

struct Dequeue
{
    int size, cap, *arr;

    Dequeue(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }

    ~Dequeue() { delete arr; }

    int getFront() { return size == 0 ? -1 : arr[0]; }
    int getRear() { return size == 0 ? -1 : arr[size - 1]; }
    bool isFull() { return size == cap; }
    bool isEmpty() { return size == 0; }

    void insertRear(int x)
    {
        if (size == cap)
            return;

        arr[size] = x;
        size++;
    }

    void deleteRear()
    {
        if (size == 0)
            return;
        size--;
    }

    void insertFront(int x)
    {
        if (size == cap)
            return;

        for (int i = size - 1; i >= 0; i--)
            arr[i + 1] = arr[i];

        arr[0] = x;
        size++;
    }

    void deleteFront()
    {
        if (size == 0)
            return;

        for (int i = 0; i < size - 1; i++)
            arr[i] = arr[i + 1];

        size--;
    }
};

int main()
{
    Dequeue dq(10);
    dq.insertFront(10);
    dq.insertFront(20);
    dq.insertRear(30);
    cout << dq.getFront() << endl;
    cout << dq.getRear() << endl;
    cout << dq.isEmpty() << endl;
    cout << dq.isFull() << endl;

    return 0;
}