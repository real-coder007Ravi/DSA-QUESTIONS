#include<iostream>
using namespace std;
void SortZeroOne(int input[],int size){
    int CountOfZero=0;
    
    for(int i=0;i<size;i++){
        if(input[i]==0){
            CountOfZero++;
        }
        
    }
    for(int i=0;i<CountOfZero;i++){
        input[i]=0;

    }
    for(int i=CountOfZero;i<size;i++){
        input[i]=1;
    }
}

int main()
{
   int input[]={0 ,1, 1, 0, 1, 0, 1};
   SortZeroOne(input,7);
   for(int i=0;i<7;i++){
       cout<<input[i]<<" ";
   }
   
}