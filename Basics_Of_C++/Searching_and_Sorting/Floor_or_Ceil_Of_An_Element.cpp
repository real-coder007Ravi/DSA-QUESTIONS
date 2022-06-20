#include<iostream>
using namespace std;
int Floor(int input[],int size,int val){
    int start=0;
    int end=size-1;
    int res=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(input[mid]==val){
            return mid;
        }
        else if(input[mid]<val){
            res=input[mid];
            start=mid+1;
        }else{
             
             end=mid-1;
        }
    }
    return res;
}
int Ceil(int input[],int size,int val){
    int start=0;
    int end=size-1;
    int res=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(input[mid]==val){
            return mid;
        }
        else if(input[mid]<val){
          
            start=mid+1;
        }else{
             res=input[mid];
             end=mid-1;
        }
    }
    return res;
}
int main()
{
    int input[]={1,2,3,4,8,10,11,12,19};
    cout<<"Floor Of An Element: "<<Floor(input,9,13)<<endl;
    cout<<"Ceil of and Element: "<<Ceil(input,9,13)<<endl;
}