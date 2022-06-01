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
int BinarySearchReverseSorted(int input[],int size,int val){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(input[mid]==val){
            return mid;
        }
        else if(input[mid]>val){
            start=mid+1;

        }
        else{
             end=mid-1;
        }
    }
    return -1;
}
int OrderAgnosticSearch(int input[],int size,int val){
    if(size==1){
        if(input[0]==val){
            return 0;
        }
    }
     else{
         if(input[0]>input[1]){
             return BinarySearchReverseSorted(input,size,val);

         }else{
             return binarySearch(input,size,val);
         }
     }

    }


int main()
{
    int input[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int val;
    cin>>val;
    int ans=OrderAgnosticSearch(input,n,val);
    cout<<ans<<endl;
}