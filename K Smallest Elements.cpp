#include<iostream>
using namespace std;
#include<vector>
#include<queue>
vector<int>KSmallestElements(int input[],int size,int K){
      vector<int>ans;
      priority_queue<int>pq;
      for(int i=0;i<K;i++){
        pq.push(input[i]);
      }
      for(int i=K;i<size;i++){
        if(pq.top()>input[i]){
            pq.pop();
            pq.push(input[i]);
        }
      }
      while(!pq.empty()){
          ans.push_back(pq.top());
          pq.pop();
      }
      return ans;

}
int main()
{
    int input[]={8,5,12,10,0,1,6,9};
   
    vector<int>ans=KSmallestElements(input,8,4);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans.at(i)<<" ";
    }
    cout<<endl;
}