#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;

        }
         int star=1;
        while(star<=i-1){
            cout<<"*";
            star++;
        }
        star=1;
        while(star<=i-1){
            cout<<"*";
            star++;
        }
         j=n-i+1;
        while(j>=1){
            cout<<j;
            j--;
        }
       
        

    
    cout<<endl;
    i++;
}}