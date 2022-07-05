#include<iostream>
using namespace std;
#include<queue>
void ReverseQueue(queue<int>&queue){
    if(queue.empty()){
        return;
    }
    int front=queue.front();
    queue.pop();
    ReverseQueue(queue);
    queue.push(front);
}
int main()
{
    queue<int> q;
        int size;
        cin >> size;

        for (int i = 0, val; i < size; i++) {
            cin >> val;
            q.push(val);
        }

        ReverseQueue(q);
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }

}