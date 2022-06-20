#include<iostream>
using namespace std;
#include<algorithm>
void intersection(int arr1[],int size1,int arr2[],int size2){
    sort(arr1,arr1+size1);
    sort(arr2,arr2+size2);
    int i=0;
    int j=0;
    while(i<size1&&j<size2){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }else{
            i++;
        }

}}
int main()
{
    int arr1[]={2,6,8,5,4,3};
    int arr2[]={2,3,4,7};
    intersection(arr1,6,arr2,4);
}