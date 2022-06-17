#include<iostream>
using namespace std;
#include<algorithm>
int PairSum(int arr[],int size,int sum){
    sort(arr,arr+size);
    int start=0;
    int end=size-1;
    int numOfPairs=0;
    while(start<end){
        if(arr[start]+arr[end]>sum){
              end--;
        }
        else if(arr[start]+arr[end]<sum){
            start++;
          }
          else{
            int ElementAtStart=arr[start];
            int ElementAtEnd=arr[end];
            if(ElementAtStart==ElementAtEnd){
                int totalElement=end-start+1;
                numOfPairs+=(totalElement)*(totalElement-1)/2;
                return numOfPairs;

            }
            int tempStart=start+1;
            int tempEnd=end-1;
            while(tempStart<=tempEnd&&arr[tempStart]==ElementAtStart){
                 tempStart++;
            }
            while(tempEnd>=tempStart&&arr[tempEnd]==ElementAtEnd){  
                tempEnd--;
            }
            int ans1=tempStart-start;
            int ans2=end-tempEnd;
            numOfPairs+=(ans1*ans2);
            start=tempStart;
            end=tempEnd;}}
            return numOfPairs;

          }

    

int main()
{
    int arr[]={1 ,3, 6, 2, 5, 4, 3, 2, 4};
    cout<<PairSum(arr,9,7)<<endl;
}