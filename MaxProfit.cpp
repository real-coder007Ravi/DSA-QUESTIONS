#include<iostream>
using namespace std;
#include<algorithm>
int maxProftOnApp(int budget[],int size){
    sort(budget,budget+size);
    int *cost=new int[size];
    for(int i=0;i<size;i++){
        cost[i]=budget[i]*(size-i);
    }
    int max=0;
    for(int i=0;i<size;i++){
        if(cost[i]>max){
            max=cost[i];}}
            return max;
}

int main()
{
    int budget[]={34 ,78, 90, 15, 67};
    int ans=maxProftOnApp(budget,5);
    cout<<ans<<endl;
}