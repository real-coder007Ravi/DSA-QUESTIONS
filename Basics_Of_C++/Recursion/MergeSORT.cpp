#include<iostream>
using namespace std;
void merge(int arr[],int start,int end){
    int size=end-start+1;
    int mid=(start+end)/2;
    int *output=new int[size];
    int i=start;
    int j=mid+1;
    int k=0;
    
    
    while(i<=mid&&j<=end){
        if(arr[i]<arr[j]){
            output[k]=arr[i];
            i++;
            k++;
        }
        else{
            output[k]=arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
        output[k]=arr[i];
        k++;
        i++;
    }
    while(j<=end){
        output[k]=arr[j];
        j++;
        k++;
    }
    int d=0;
    for(int i=start;i<=end;i++){
        arr[i]=output[d];
        d++;
    }
}
void MergeSort(int arr[],int start,int end){
    //Base Case
    if(start>=end){
        return;
    }
    int mid=(start+end)/2;
    MergeSort(arr,start,mid);
    MergeSort(arr,mid+1,end);
    merge(arr,start,end);
}
void MergeSort(int arr[],int size){
    MergeSort(arr,0,size-1);
}
int main()
{
    int arr[]={4,2,9,6,1};
    MergeSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}