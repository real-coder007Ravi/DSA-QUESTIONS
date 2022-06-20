#include<iostream>
using namespace std;
bool Fibonacci_Number(int n){
    if(n==0||n==1){
        return true;
    }
    int a=0;
    int b=1;
    for(int i=1;i<=n;i++){
        i=a+b;
        if(i==n){
            return true;
        }
        a=b;
        b=i;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    cout<<Fibonacci_Number(n)<<endl;
}