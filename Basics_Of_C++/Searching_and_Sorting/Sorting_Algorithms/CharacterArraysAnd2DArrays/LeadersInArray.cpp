#include<iostream>
using namespace std;
void LeadersInArray(int arr[],int len){
    for(int i=0;i<len-1;i++){
        bool isLeader=true;
        for(int j=i+1;j<len;j++){
            if(arr[j]>arr[i]){
                isLeader=false;
                break;
            }
        }
        if(isLeader){
            cout<<arr[i]<<" ";
        }
    }
    cout<<arr[len-1];
}
int main()
{
    int arr[]={13,17,5,4,6};
    LeadersInArray(arr,5);
    
}