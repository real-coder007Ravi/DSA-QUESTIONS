                                  //   "Those who cannot remember the past are condemned to repeat it"-Dynamic Programming
#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
    int a=fib(n-1);
    int b=fib(n-2);
    return a+b;
}
int fib_2helper(int n,int *ans){
    if(n<=1)return n;
    if(ans[n]!=-1){
        return ans[n];
    }
    int a=fib_2helper(n-1,ans);
    int b=fib_2helper(n-2,ans);
    ans[n]=a+b;
    return ans[n];
}
int fib_2(int n){
    int *ans=new int[n+1];
    for(int i=0;i<n+1;i++){
        ans[i]=-1;
    }
    return fib_2helper(n,ans);
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    cout<<fib_2(n)<<endl;
}