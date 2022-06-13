#include<iostream>
using namespace std;
int partition(int arr[],int start,int end){
    int count=0;
    for(int i=start+1;i<=end;i++){
        if(arr[i]<arr[start]){
            count++;
        }
    }
    int pivot=start+count;
    int temp=arr[start];
    arr[start]=arr[pivot];
    arr[pivot]=temp;
    int i=start;
    int j=end;
    while(i<=pivot-1&&j>=pivot+1){
        if(arr[i]<arr[pivot]){
            i++;
        }
        else if(arr[j]>=pivot){
            j--;

        }
        else{
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }

    }
    return pivot;
}
void QuickSort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int res=partition(arr,start,end);
    QuickSort(arr,start,res-1);
    QuickSort(arr,res+1,end);

}
int main()
{
    int arr[]={6,1,2,8,9,15};
    QuickSort(arr,0,5);
    for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";}
    cout<<endl;
}