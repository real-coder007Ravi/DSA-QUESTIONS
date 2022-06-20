#include<iostream>
using namespace std;
int DuplicateElement(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if((arr[i]==arr[j])&&(i!=j)){
                return arr[i];
            }

        }
    }
}
int main()
{    
    int arr[]={5,7,8,9,7,13,57};
    cout<<DuplicateElement(arr,7)<<endl;
}











