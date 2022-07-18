#include <iostream>
using namespace std;
#include <queue>
void KSortedArray(int input[], int size, int K)
{
    priority_queue<int> pq;
    for (int i = 0; i < K; i++)
    {
        pq.push(input[i]);
    }
    int j = 0;
    for (int i = k; i < size; i++)
    {
        input[j] = pq.top();
        pq.pop();

        j++;
    }
    while (!pq.empty())
    {
        input[j] = pq.top();
        pq.pop();
        j++;
    }
}
int main()
{
    int input[] = {12, 7, 5, 9, 4};
    int size = 5;
    KSortedArray(input, size, 3);
    for (int i = 0; i < size; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
}
