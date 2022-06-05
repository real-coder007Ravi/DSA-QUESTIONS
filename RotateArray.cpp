#include<iostream>
using namespace std;
void RotateArray(int input[],int size,int d){
    int i=0,j=size-1;
    while(i<j){
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
    int c=0,q=size-d-1;
    while(c<q){
        int temp=input[c];
        input[c]=input[q];
        input[q]=temp;
        c++;
        q--;}
    int u=size-d,v=size-1;
    while(u<v){
        int temp=input[u];
        input[u]=input[v];
        input[v]=temp;
        u++;
        v--;
    }

}
int main()
{
    int input[]={2,6,3,1,5,9,8};
    RotateArray(input,7,2);
    for(int i=0;i<7;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}