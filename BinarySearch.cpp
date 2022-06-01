#include<iostream>
using namespace std;

int binarySearch(int input[],int size,int val){
    int start=0;
    int end=size-1;
    while (start<=end){
        int mid=(start+end)/2;
        if(input[mid]==val){
            return mid;
        }
        else if(input[mid]>val){
            end=mid-1;

        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
   
int main()
{
    int input[]={5,9,12,45,67,78,89};
    int ans=binarySearch(input,7,67);
    cout<<ans;
}