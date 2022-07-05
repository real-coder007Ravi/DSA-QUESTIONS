#include<iostream>
using namespace std;
#include<stack>
int *StockSpan(int *price,int size){
    int *ans=new int[size];
    stack<int>s;
    ans[0]=1;
    s.push(0);
    for(int i=1;i<size;i++){
         while(!s.empty()&&price[i]>price[s.top()]){
            s.pop();
         }
         if(s.empty()){
            ans[i]=i+1;
         }
         else{
            ans[i]=i-s.top();
    }
    s.push(i);
}
return ans;}

int main()
{
    int size;
    cin>>size;
    int *input=new int[size];
    for(int i=0;i<size;i++){
        cin>>input[i];
    }
    int *output=StockSpan(input,size);
    for(int i=0;i<size;i++){
        cout<<output[i]<<" ";
    }
    delete[]output;
    delete[]input;
}