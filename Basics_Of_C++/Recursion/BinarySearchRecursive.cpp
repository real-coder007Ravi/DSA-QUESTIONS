#include<iostream>
using namespace std;
int BinarySearch(int arr[],int start,int end,int x){
    if(start>end){
        return -1;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]==x){
        return mid;
    }
    if(arr[mid]<x){
        return BinarySearch(arr,mid+1,end,x);
    }
    if(arr[mid]>x){
        return BinarySearch(arr,start,mid-1,x);
    }
}
int main()
{
    int arr[]={2 ,3, 4, 5, 6, 8 };
    cout<<BinarySearch(arr,0,5,6);
}