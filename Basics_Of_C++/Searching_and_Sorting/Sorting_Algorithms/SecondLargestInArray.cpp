#include<iostream>
using namespace std;
#include<climits>
int SecondMax(int input[],int size){
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<size;i++){
        if(input[i]>max){
            smax=max;
            max=input[i];
        }
        else if(input[i]>smax&&input[i]!=max){
            smax=input[i];
        }
    }
    return smax;

}
int main()
{
    int input[]={1,2,5,12,89};
    cout<<SecondMax(input,5)<<endl;
}