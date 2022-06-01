#include<iostream>
using namespace std;
int FirstOccurenceUsingBinarySearch(int input[],int size,int val){
    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(input[mid]==val){
            ans=mid;
            end=mid-1;
        }else if(input[mid]<val){
            start=mid+1;
        }else{
            end=mid-1;
    }
    }
    return ans;

}
int LastOccurenceUsingBinarySearch(int input[],int size,int val){
    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(input[mid]==val){
            ans=mid;
            start=mid+1;
        }else if(input[mid]<val){
            start=mid+1;
        }else{
            end=mid-1;
    }
    }
    return ans;

}
int CountOfAnElementInASorted(int input[],int size,int val){
    int FirstIndex=FirstOccurenceUsingBinarySearch(input,size,val);
    int LastIndex=LastOccurenceUsingBinarySearch(input,size,val);
    return LastIndex-FirstIndex+1;

}
int main()
{
    int n;
    cin>>n;
    int input[100];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int val;
    cin>>val;
    int ans=CountOfAnElementInASorted(input,n,val);
    cout<<ans<<endl;
}