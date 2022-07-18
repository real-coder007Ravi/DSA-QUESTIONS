#include <iostream>
using namespace std;
#include <queue>
void findMedian(int *arr, int n)
{
    priority_queue<int> max;
    priority_queue<int, vector<int>, greater<int>> min;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            max.push(arr[i]);
        }
        else
        {
            if (max.top() < arr[i])
            {
                min.push(arr[i]);
            }
            else
            {
                max.push(arr[i]);
            }
        }

        if ((int)(max.size() - min.size()) > 1)
        {
            int x = max.top();
            max.pop();
            min.push(x);
        }
        else if ((int)(min.size() - max.size()) > 1)
        {
            int x = min.top();
            min.pop();
            max.push(x);
        }

        if (max.size() == min.size())
        {
            cout << (min.top() + max.top()) / 2 << " ";
        }

        else if (max.size() > min.size())
        {
            cout << max.top() << " ";
        }
        else
        {
            cout << min.top() << " ";
        }
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    findMedian(arr, 5);
}