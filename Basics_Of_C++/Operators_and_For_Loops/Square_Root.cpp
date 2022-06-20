#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int ans=0;
    while(i<=n/2){
        if(i*i<=n){
        ans=i;}
        else{
            break;
        }
        i++;

    }
    cout<<ans<<endl;
}