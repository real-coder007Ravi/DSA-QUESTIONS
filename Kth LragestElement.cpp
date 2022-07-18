#include<iostream>
using namespace std;
#include<queue>
int KthLargestElement(int arr[],int size,int K){
    priority_queue<int>pq;
    for(int i=0;i<K;i++){
        pq.push(arr[i]);
    }
    for(int i=K;i<size;i++){
        if(pq.top()<arr[i]){
            pq.pop();
            pq.push(arr[i]);
        }
    }

}
int main()
{
   int arr[]={9, 4 ,8 ,7 ,11 ,3};
   cout<<KthLargestElement(arr,6,2)<<endl;
}