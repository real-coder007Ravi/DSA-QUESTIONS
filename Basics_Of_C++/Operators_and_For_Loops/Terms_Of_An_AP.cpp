#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int i=1;
    int count=0;
    int res;
    while(count<x){
         res=3*i+2;
         if(res%4!=0){
             cout<<res<<endl;
             count++;
         }
         i++;
    }}