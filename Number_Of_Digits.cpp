#include<iostream>
using namespace std;
int count(int n){
    if(n<10){
        return 1;
    }
    int ans=count(n/10);
    return 1+ans;
}
int main()
{
    int n;
    cin>>n;
    int ans=count(n);
    cout<<ans<<endl;
}