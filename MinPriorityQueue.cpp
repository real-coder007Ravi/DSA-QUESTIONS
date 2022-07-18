#include <iostream>
using namespace std;
#include <vector>
class PriorityQueue
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
    int getMin()
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
            if (pq[childIndex] < pq[parentIndex])
            {
                int temp = pq[childIndex];
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
    int RemoveMin()
    {
        int ans = pq[0];
        pq[0] = pq[pq.size() - 1];
        pq.pop_back();
        int parentIndex = 0;
        int LeftChildIndex = 2 * parentIndex + 1;
        int RightChildIndex = 2 * parentIndex + 2;
        while (LeftChildIndex < pq.size())
        {
            int minindex = parentIndex;
            if (pq[minindex] > pq[LeftChildIndex])
            {
            
            minindex = LeftChildIndex;}
        
        if (RightChildIndex < pq.size() && pq[minindex] > pq[RightChildIndex])
        {
            minindex = RightChildIndex;
        }
        parentIndex = minindex;
        LeftChildIndex = 2 * parentIndex + 1;
        RightChildIndex = 2 * parentIndex + 2;
        return ans;
    }
} 
int main()
{
    PriorityQueue p;
    p.insert(100);
    p.insert(20);
    p.insert(40);
    p.insert(38);
    p.insert(32);
    p.insert(89);
    cout<<p.getSize()<<" "<<p.isEmpty()<<" ";
    while(!p.isEmpty()){
        cout<<p.RemoveMin()<<" ";
    }
    cout<<endl;
}
