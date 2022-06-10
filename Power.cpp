#include<iostream>
using namespace std;
int Power(int x,int n){
    if(n==0){
        return 1;
    }
    int count=0;
    while(count<n){

    count++;
    int smallOutput=Power(x,n-1);
    return x*smallOutput;
    }
}
int main()
{
    int x,n;
    cin>>x>>n;
    int ans=Power(x,n);
    cout<<ans<<endl;
}