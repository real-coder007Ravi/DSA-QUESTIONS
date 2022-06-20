#include<iostream>
using namespace std;
void SwapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        
    }
}
int main()
{
    int arr[]={1,2,3,4,6,8};
    SwapAlternate(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}