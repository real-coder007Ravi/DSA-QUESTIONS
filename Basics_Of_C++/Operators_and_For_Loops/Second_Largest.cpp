#include<iostream>
using namespace std;
#include<climits>
int main()
{
    int n;
    cin>>n;
    int count=1;
    int num;
    int max=INT_MIN;
    int smax=INT_MIN;
    while(count<=n){
        cin>>num;
        if(num>max){
            smax=max;
            max=num;
        }
        else if(num>smax&&max!=num){
            smax=num;
        }
        count++;
    }
    cout<<smax<<endl;
}