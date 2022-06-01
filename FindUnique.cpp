#include<iostream>
using namespace std;
int FindUnique(int arr[],int size){
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            return arr[i];
        }
    }
}
int main()
{
    int arr[]={2,5,6,5,1,2,1,2};
    cout<<FindUnique(arr,8);
}