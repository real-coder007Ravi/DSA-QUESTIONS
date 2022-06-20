#include<iostream>
using namespace std;
#include<cmath>
int MinimumDifferenceElement(int input[],int size,int key){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(input[mid]==key){
            return input[mid];
        }
        else if(input[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    int ans1=abs(input[start]-key);
    int ans2=abs(input[end]-key);
    if(ans1<ans2){
        return input[start];
    }
    else{
        return input[end];
    }

}
int main()
{
    int input[]={1,3,8,10,12,15};
    int key=12;
    cout<<MinimumDifferenceElement(input,5,12)<<endl;
}