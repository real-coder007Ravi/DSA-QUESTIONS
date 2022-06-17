#include<iostream>
using namespace std;
int DuplicateElementInArray(int arr[],int size){
    int TotalSum=(size-2)*(size-1)/2;
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];}
        return (sum-TotalSum);}


int main()
{
    int arr[]={0 ,7, 2, 5, 4, 7, 1, 3, 6};
    cout<<DuplicateElementInArray(arr,9)<<endl;
}