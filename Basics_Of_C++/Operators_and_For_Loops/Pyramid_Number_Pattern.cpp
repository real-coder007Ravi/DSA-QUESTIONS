#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space++;
        }
        int j=i;
        while(j>=1){
            cout<<j;
            j--;
        }
        
     j=1;
    int ans=2;
    while(j<=i-1){
        cout<<ans;
        ans++;
        j++;
    }
    cout<<endl;
    i++;
}}