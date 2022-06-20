#include<iostream>
using namespace std;
int CheckArrayRotation(int input[],int size){
    for(int i=0;i<size-1;i++){
        if(input[i]>input[i+1]){
            return i+1;
        }
    }
    return 0;
}
int main()
{
    int input[]={5 ,6, 1, 2, 3, 4};
    cout<<CheckArrayRotation(input,6)<<endl;
}