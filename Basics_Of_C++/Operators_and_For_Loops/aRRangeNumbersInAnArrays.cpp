#include<iostream>
using namespace std;
void arrange(int arr[],int size){
    int start=0;
    int end=size-1;
    int val=1;
    while(start<end){
        arr[start]=val;
        val++;
        start++;
        arr[end]=val;
        val++;
        end--;
        if(start==end){
               arr[start]=val;
        }
    }
}
int main()
{
    int arr[6];
    arrange(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
}