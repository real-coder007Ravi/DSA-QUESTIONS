#include<iostream>
using namespace std;
#include<vector>
class PriorityQueue{
    vector<int>pq;
    public:
     PriorityQueue(){

     }
     bool isEmpty(){
        return pq.size()==0;
     }
     int getSize(){
        
        return pq.size;
     }
     int getMin(){
        if(isEmpty()){
            return 0;
        }
        return pq[0];

     }
     void insert(int element){
        pq.push_back(element);
        int childindex=pq.size()-1;
       
        while(childindex>0){
             int parentindex=(childindex-1)/2;
             if(pq[childindex]<pq[parentindex]){
                swap(pq[childindex],pq[parentindex]);
             }
             else{
                break;
             }
             childindex=parentindex;

        
     }
}
int main()
{
    return 0;
}