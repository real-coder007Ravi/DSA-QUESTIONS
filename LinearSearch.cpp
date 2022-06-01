#include<iostream>
using namespace std;
int LinearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[]={10,15,16,31,92};
    cout<<LinearSearch(arr,5,31)<<endl;
    int arr1[100];
    int n;
    cin>>n;
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<LinearSearch(arr1,n,key);

    

}