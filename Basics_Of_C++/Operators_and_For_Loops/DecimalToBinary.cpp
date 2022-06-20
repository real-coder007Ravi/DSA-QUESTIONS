#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    long pv=1;
    long res=0;
    while(num>0){
        long d=num%2;
        res+=d*pv;
        pv=pv*10;
        num=num/2;
    }
    cout<<res<<endl;
}