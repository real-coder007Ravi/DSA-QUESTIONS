#include <iostream>
using namespace std;
#include <queue>
int BuyTicket(int arr[], int size, int K)
{
    queue<int> q;
    for (int i = 0; i < size; i++)
    {
        q.push(i);
    }
    priority_queue<int> pq;
    for (int i = 0; i < size; i++)
    {
        pq.push(arr[i]);
    }
    int time = 0;
    while (q.front() != K || pq.top() != arr[q.front()])
    {
        if (pq.top() > arr[q.front()])
        {
            int x = q.front();
            q.pop();
            q.push(x);
        }

        else if (pq.top() == arr[q.front()])
        {
            pq.pop();
            q.pop();
            time++;
        }
    }
    return 1 + time;
}
int main()
{
    int arr[] = {2, 3, 2, 2, 4};
    cout << BuyTicket(arr, 5, 3) << endl;
}