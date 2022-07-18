#include<iostream>
using namespace std;
#include<vector>
class PriorityQueue{
    vector<int>pq;
    public:
     
     int getSize(){
        return pq.size();
     }
     int getMin(){
        if(isEmpty()){
            return 0;
        }
        return pq[0];
     }
     bool isEmpty(){
        return pq.size()==0;
     }
     void insert(int element){
        pq.push_back(element);
        //Up-Heapify
        int childIndex=pq.size()-1;
        while(childIndex>0){
            int parentIndex=(childIndex-1)/2;
            if(pq[parentIndex]>pq[childIndex]){
                int temp=pq[childIndex];
                pq[parentIndex]=pq[childIndex];
                pq[childIndex]=temp;
            }
            else{
                break;
            }
            parentIndex=childIndex;
        }}
        int RemoveMin(){
            if(isEmpty()){
                return 0;
            }
            int ans=pq[0];
            pq[0]=pq[pq.size()-1];
            pq.pop_back();
            int parentIndex=0;
            int LeftChildIndex=2*parentIndex+1;
            int RightChildIndex=2*parentIndex+2;
            while(LeftChildIndex<pq.size()){
            int minindex=parentIndex;
            if(pq[minindex]>pq[LeftChildIndex]){
                minindex=LeftChildIndex;}
            if(RightChildIndex<pq.size()&& pq[minindex]>pq[RightChildIndex]){
                minindex=RightChildIndex;
            }
            if(parentIndex==minindex){
                break;
            }
            parentIndex=minindex;
            LeftChildIndex=2*parentIndex+1;
            RightChildIndex=2*parentIndex+2;
            }
            return ans;
        }


     

};
int main()
{
    PriorityQueue p;
    p.insert(100);
    p.insert(10);
    p.insert(30);
    p.insert(80);
    p.insert(34);
    p.insert(27);
    cout<<p.getMin()<<" "<<p.getSize()<<endl;
    while(!p.isEmpty()){
        cout<<p.RemoveMin()<<endl;
    }
}