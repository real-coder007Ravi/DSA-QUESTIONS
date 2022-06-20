#include<iostream>
using namespace std;
int PeakElement(int input[],int size){
     int start=0;
     int end=size-1;
     while(start<=end){
         int mid=start+(end-start)/2;
         if(mid>0 && mid<size-1){
             if(input[mid]>input[mid-1]&&input[mid]>input[mid+1]){
                 return mid;
             }
             else if(input[mid-1]>input[mid]){
                 end=mid-1;
             }else{
                 start=mid+1;
             }

         }
         else if(mid==0){
             if(input[0]>input[1]){
                  return 0;
             }else{
                 return 1;
             }
         }
         else if(mid==size-1){
             if(input[size-1]>input[size-2]){
                 return size-1;
             }else{
                 return size-2;
             }
         }
     }
}
int main()
{
    int input[]={5,10,20,15};
    cout<<PeakElement(input,4)<<endl;
}