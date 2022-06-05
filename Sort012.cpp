#include<iostream>
using namespace std;
void SortZeroOneTwo(int input[],int size){
    int CountOfZer0=0;
    int CountOfOne=0;
    int CountOfTwo=0;
    for(int i=0;i<size;i++){
        if(input[i]==0){
            CountOfZer0++;
        }
        else if(input[i]==1){
            CountOfOne++;
        }
        else{
            CountOfTwo++;
        }
    }
    int i=0;
    for(;i<CountOfZer0;i++){
        input[i]=0;
    }
    for(;i<CountOfZer0+CountOfOne;i++){
        input[i]=1;
    }
    for(;i<CountOfZer0+CountOfOne+CountOfTwo;i++){
        input[i]=2;
    }

}
int main()
{
    int input[]={1,2,1,2,0,1,0,1,2,1,0,0,1,0};
    SortZeroOneTwo(input,14);
    for(int i=0;i<14;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}