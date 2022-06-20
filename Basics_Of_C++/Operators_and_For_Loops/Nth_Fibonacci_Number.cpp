#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n whose Fibonacci you want to find"<<endl;
    cin>>n;
    int a=0;
    int b=1;
     if(n==1){
         cout<<1<<endl;
     }
     for(int i=2;i<=n;i++){
         int c=a+b;
         if(i==n){
             cout<<c;
         }
         a=b;
         b=c;
     }
    cout<<endl;

}