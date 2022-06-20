#include<iostream>
using namespace std;

int MaxInABitonicArray(int input[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(mid>0&&mid<size-1)
        {
            if(input[mid]>input[mid-1]&&input[mid]>input[mid+1]){
                return mid;
            }
            else if(input[mid-1]>input[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        else if(mid==0){
            if(input[0]>input[1]){
                return 0;
            }
            else{
                return 1;
            }
        }
        else if(mid==size-1){
            if(input[size-1]>input[size-2]){
                return size-1;
            }
            else{
                return size-2;
            }
        }
    }
}

int AscBS(int input[],int start,int end,int key){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(input[mid]==key){
            return mid;
        }
        else if(input[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
   
    
}

int AscendingBS(int input[],int start,int end,int key){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(input[mid]==key){
            return mid;
        }
        else if(input[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
   
    
}
int DescnedingBS(int input[],int start,int end,int key){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(input[mid]==key){
            return mid;
        }
        else if(input[mid]>key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
   
    
}
int ElementSearched(int input[],int size,int key){
    int ans=MaxInABitonicArray(input,size);
    
   int ans1=AscendingBS(input,0,ans-1,key);
   int ans2=DescnedingBS(input,ans,size-1,key);
   if(ans1!=-1||ans2==-1){
       return ans1;
   }
   else if(ans2!=-1||ans1==-1){
       return ans2;
   }
   return -1;
    
}   
int main()
{
    int input[]={1,3,8,12,4,2};
   cout<<ElementSearched(input,6,2);
   
}




