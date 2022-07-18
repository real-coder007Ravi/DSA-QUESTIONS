#include <iostream>
using namespace std;
#include <vector>
class MaxPriorityQueue()
{
    vector<int> pq;

public:
    int getSize()
    {
        return pq.size();
    }
    bool isEmpty()
    {
        if (isEmpty())
        {
            return 0;
        }
        return pq.size() == 0;
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
            int childIndex = pq.size() - 1;
            while (childIndex > 0)
            {
                int parentIndex = (childIndex - 1) / 2;
                if (pq[childIndex] > pq[parentIndex])
                {
                    int temp = pq[parentIndex];
                    pq[parentIndex] = pq[childIndex];
                    pq[childIndex] = temp;
                }

                else
                {
                    break;
                }
                childIndex = parentIndex;
            }
        }
        int RemoveMax()
        {
            int ans = pq[0];
            pq[0] = pq[pq.size() - 1];
            pq.pop_back();
            int parentIndex = 0;
            int LeftChildIndex = 2 * parentIndex + 1;
            int RightIndex = 2 * parentIndex + 2;

            while (LeftChildIndex < pq.size())
            {
                int minindex = parentIndex;
                if (pq[parentindex] < pq[LeftChidIndex])
                {
                    minindex = LeftChildIndex;
                }
                if (RightChildIndex < pq.size() && pq[parentIndex] < pq[RightChildIndex])
                {
                    minindex = RightChildIndex;
                }
                parentIndex = minindex;
                LeftChildIndex = 2 * parentIndex + 1;
                RightIndex = 2 * parentIndex + 2;
            }
        }
    };
    int main()
    {
        MaxPriorityQueue p;
        p.insert(100);
        p.insert(50);
        p.insert(60);
        p.insert(25);
        p.insert(46);
        cout << p.getSize() << " " << p.getMax() << endl;
        while (!p.isEmpty())
        {
            cout << p.RemoveMax << endl;
        }
    }