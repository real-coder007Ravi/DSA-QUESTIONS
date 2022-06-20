#include<iostream>
using namespace std;
char NextAlphabet(char input[],int size,char key){
    int start=0;
    int end=size-1;
    char ans;
    while(start<=end){
        int mid=start+(end-start)/2;
        
        if(input[mid]<key){
            start=mid+1;
        }else{
           ans=input[mid];
            end=mid-1;
            
        }
    }
    return ans;
}
int main()
{
    char input[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>input;}
    int key;
    cin>>key;
    
    char ans=NextAlphabet(input,n,key);
    cout<<ans<<endl;
}