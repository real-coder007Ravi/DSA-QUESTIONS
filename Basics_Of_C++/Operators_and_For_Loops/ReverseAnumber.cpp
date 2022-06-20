#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    int res=0;
    while(num>0){
        int d=num%10;
        res=res*10+d;
        num=num/10;
    }
    cout<<res<<endl;
}