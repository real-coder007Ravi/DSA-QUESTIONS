#include<iostream>
using namespace std;
#include<queue>
#include<vector>
vector<int>KSmallestElements(int arr[],int size,int K){
    vector<int>ans;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<K;i++){
        pq.push_back(arr[i]);
    }
    for(int i=K;i<size;i++){
        if(pq.top()<arr[i]){
             pq.pop();
             pq.push(arr[i]);
        }
    }
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
}

int main()
{
    int arr[]={8,5,12,10,0,1,6,9};
    vector<int>ans=KSmallestElements(arr,8,4);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}