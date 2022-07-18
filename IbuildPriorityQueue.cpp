#include<iostream>
using namespace std;
#include<queue>
int main()
{
    priority_queue<int>p;
    p.push(100);
    p.push(20);
    p.push(30);
    p.push(78);
    p.push(10);
    cout<<"Size: "<<p.size()<<endl;
    cout<<"Top Element: "<<p.top()<<endl;
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
}