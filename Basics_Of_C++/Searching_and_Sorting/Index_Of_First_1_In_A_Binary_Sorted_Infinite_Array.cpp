#include<iostream>
using namespace std;
int IndexOfFirst1(int input[],int key){
    int start=0;
    int  end=1;
    if(input[end]!=key){
        start=end;
        end=end*2;
    }
    int mid;
    //First Occurence Of An Element
     while(start<=end){
            mid=start+(end-start)/2;
           if(input[mid]==key&&(mid==0||input[mid-1]==0)){
              return mid;
           }
           else if(input[mid]==key){
               end=mid-1;
           }
           else{
               start=mid+1;
           }

     }
           
 }
    


int main()
{
    int input[]={0,0,0,0,1,1,1,1,1,1};
    int ans=IndexOfFirst1(input,1);
    cout<<ans<<endl;
}