#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int res=0;
    int pv=1;
    while(num>0){
        int d=num%10;
        res+=pv*d;
        pv*=2;
        num=num/10;
    }
    cout<<res<<endl;
}
