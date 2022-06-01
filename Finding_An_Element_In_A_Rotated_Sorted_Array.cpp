#include<iostream>
using namespace std;
int FindElement(int input[],int size,int val){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(input[mid]==val){
            return mid;
        }
        else if(input[start]<=input[mid]){
            if(val>=input[start]&&val<input[mid]){
                end=mid-1;
            }else {
                start=mid+1;
            }

        }
        else if(input[mid]<=input[end]) {
            if(val>input[mid]&&val<=input[end]){
                start=mid+1;
            }else {
                end=mid-1;
            }

        }
    }
    return -1;}

int main()
{
    int input[]={11,12,15,18,2,5,6,8};
    cout<<FindElement(input,8,8);
}