#include <iostream>
using namespace std;
template <typename T>
class QueueUsingArray
{
    T *data;
    int nextIndex;
    int FirstIndex;
    int size;
    int capacity;

public:
    // Parametrised Constructor
    QueueUsingArray(int s)
    {
        data = new T[s];
        nextIndex = 0;
        FirstIndex = -1;
        size = 0;
        capacity = s;
    }
    // No of Elements in the queue
    int getSize()
    {
        return size;
    }
    // Check if Queue is empty or not
    bool isEmpty()
    {
        return size == 0;
    }
    // Insert Elements
    void enqueue(T element)
    {
        if (size == capacity)
        {
            cout << "Queue Full!" << endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;
        if (FirstIndex == -1)
        {
            FirstIndex = 0;
        }
        size++;
    }
    // Delete Elements
    T dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Empty" << endl;
            return 0;
        }
        T ans = data[FirstIndex];
        FirstIndex = (FirstIndex + 1) % capacity;
        size--;
        return ans;
    }
    // Access Front Element
    T front()
    {
        if (isEmpty())
        {
            cout << "Queue Empty" << endl;
            return 0;
        }
        return data[FirstIndex];
    }
};
int main()
{
    QueueUsingArray<int> s(5);
    s.enqueue(10);
    s.enqueue(20);
    s.enqueue(30);
    s.enqueue(40);
    s.enqueue(50);
    s.enqueue(60);
    cout << s.front() << endl;
    cout << s.dequeue() << endl;
    cout << s.dequeue() << endl;
    cout << s.dequeue() << endl;
    cout << s.getSize() << endl;
    cout << s.isEmpty() << endl;
}