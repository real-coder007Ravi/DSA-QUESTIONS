#include<iostream>
using namespace std;
int RotationCount(int input[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        int prev=input[(mid+size-1)%size];
        int next=input[(mid-1)%size];
        if((input[mid]<=input[prev])&&(input[mid]<=input[next])){
            return mid;

        }else if(input[start]<=input[mid]){
            start=mid+1;
        }else if(input[mid]<=input[end]){
            end=mid-1;
        }
    }
}
int main()
{
    int input[]={15,18,2,3,6,12};
    int ans=RotationCount(input,6);
    cout<<ans<<endl;
    
}