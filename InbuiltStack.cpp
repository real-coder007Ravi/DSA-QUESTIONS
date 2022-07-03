#include<iostream>
using namespace std;
#include<stack>
int main()
{
     stack<int>s;
     s.push(10);
     s.push(23);
     s.push(30);
     s.push(40);
     s.push(50);
     cout<<s.top()<<" "<<endl;
     s.pop();
     cout<<s.top()<<endl;
     cout<<s.size()<<endl;
     cout<<s.empty()<<endl;
       stack<char>s1;
     s1.push(100);
     s1.push(48);
     s1.push(56);
     s1.push(52);
     s1.push(50);
     cout<<s1.top()<<" "<<endl;
     s1.pop();
     cout<<s1.top()<<endl;
     cout<<s1.size()<<endl;
     cout<<s1.empty()<<endl;
}