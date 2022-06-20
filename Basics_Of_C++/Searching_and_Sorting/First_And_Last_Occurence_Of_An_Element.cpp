#include<iostream>
using namespace std;

int FirstOccurencesUsingBinarySearch(int input[],int size,int val){
       int start=0;
       int end=size-1;
       int ans=-1;
       while(start<=end){
           int mid=start+(end-start)/2;
           if(input[mid]==val){
               ans=mid;
               end=mid-1;
           }
           else if(input[mid]>val){
               end=mid-1;
           }else{
               start=mid+1;
           }
           }
           return ans;
       }
 int LasttOccurencesUsingBinarySearch(int input[],int size,int val){
       int start=0;
       int end=size-1;
       int ans=-1;
       while(start<=end){
           int mid=start+(end-start)/2;
           if(input[mid]==val){
               ans=mid;
               start=mid+1;
           }
           else if(input[mid]>val){
               end=mid-1;
           }else{
               start=mid+1;
           }
           }
           return ans;
       }

int main()
{
    int input[]={1,2,2,2,2,8,9};
    cout<<FirstOccurencesUsingBinarySearch(input,8,2)<<endl;
    cout<<LasttOccurencesUsingBinarySearch(input,8,2);
}