#include<iostream>
using namespace std;
int SearchInANearlySortedArray(int input[],int size,int val){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(input[mid]==val){
            return mid;
        }
        else if(mid-1>=start&&input[mid-1]==val){
            return mid-1;
        }
        else if(mid+1<=end&&input[mid+1]==val){
            return mid+1;
        }
        else if(val>input[mid]){
            start=mid+2;
        }
        else if(val<input[mid]){
            end=mid-2;
        }
    }
}
int main()
{
    int input[]={5,10,30,20,40};
    cout<<SearchInANearlySortedArray(input,5,20);
}