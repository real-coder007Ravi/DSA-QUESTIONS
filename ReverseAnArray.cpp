#include<iostream>
using namespace std;
#include<algorithm>
void reverse(int arr[],int size,int start,int end){
    if(start>=end){
        return;
    }
    swap(arr[start],arr[size-start-1]);
    reverse(arr,size,start+1,end-1);
}
void reverse(int arr[],int size,int start){
    if(start>=(size)/2){
        return;
    }
    swap(arr[start],arr[size-start-1]);
    reverse(arr,size,start+1);   
}

int main()
{
    int arr[]={1,4,7,8,9};
    int arr2[]={1,2,3,4,5};
    reverse(arr,5,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr2,5,0);
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
}
