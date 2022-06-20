#include<iostream>
using namespace std;
int FindPositionInInfiniteSortedArray(int input[],int key){
    int low=0;
    int high=1;
    while(key>input[high]){
        low=high;
        high=high*2;
    }
    while(low<=high){
        int mid=low+(high-low)/2;
        if(input[mid]==key){
            return mid;
        }
        else if(input[mid]>key){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }

}
int main()
{
    int input[]={1,2,3,4,5,6,7,8,9,10,11};
    int ans=FindPositionInInfiniteSortedArray(input,7);
    cout<<ans<<endl;
}