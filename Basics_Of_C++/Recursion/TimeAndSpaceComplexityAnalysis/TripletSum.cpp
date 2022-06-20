#include<iostream>
using namespace std;
int FindUniqueNumber(int arr[],int size){
    int res=0;
    for(int i=0;i<size;i++){
    res=res^arr[i];}
    return res;
}

int main()
{
    int arr[]={6,1,6,3,4,3,1};
    cout<<FindUniqueNumber(arr,7)<<endl;
}