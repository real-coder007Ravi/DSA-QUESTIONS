#include <iostream>
using namespace std;
#include <vector>
class MaxPriorityQueue
{
    vector<int> pq;

public:
    int getSize()
    {
        return pq.size();
    }
    bool isEmpty()
    {
        return pq.size() == 0;
    }
    int getMax()
    {
        if (isEmpty())
        {
            return 0;
        }
        return pq[0];
    }
    void insert(int element)
    {
        pq.push_back(element);
        int childindex = pq.size() - 1;
        while (childindex > 0)
        {
            int parentIndex = (childindex - 1) / 2;
            if (pq[childindex] > pq[parentIndex])
            {
                int temp = pq[parentIndex];
                pq[parentIndex] = pq[childindex];
                pq[childindex] = temp;
            }
            else
            {
                break;
            }
            childindex = parentIndex;
        }
    }
    int RemoveMax()
    {
        int temp = pq[0];
        pq[0] = pq[pq.size() - 1];
        pq.pop_back();
        int parentIndex = 0;
        int LeftChildIndex = 2 * parentIndex + 1;
        int RightChildIndex = 2 * parentIndex + 2;

        while (LeftChildIndex < pq.size())
        {
            int maxIndex = parentIndex;
            if (pq[LeftChildIndex] > pq[maxIndex])
            {
                maxIndex = LeftChildIndex;
            }
            if (RightChildIndex < pq.size() && pq[RightChildIndex] > pq[maxIndex])
            {
                maxIndex = RightChildIndex;
            }
            if (parentIndex == maxIndex)
            {
                break;
            }
            parentIndex = maxIndex;
            LeftChildIndex = 2 * parentIndex + 1;
            RightChildIndex = 2 * parentIndex + 2;
        }
        return temp;
    }
};
int main()
{
    MaxPriorityQueue p;
    p.insert(10);
    p.insert(70);
   

    cout << p.getSize() << " " << p.getMax() << endl;
    while (!p.isEmpty())
    {
        cout << p.RemoveMax() << endl;
    }
}
