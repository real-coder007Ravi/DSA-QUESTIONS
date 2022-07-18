#include<iostream>
using namespace std;
#include<queue>
int main()
{
    priority_queue<int,vector<int>,greater<int>>p;
    p.push(10);
    p.push(20);
    p.push(300);
    p.push(21);
    p.push(190);
    cout<<p.size()<<" "<<p.top()<<endl;
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
}