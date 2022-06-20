#include<iostream>
using namespace std;
void printName(int start,int end){
    if(start>end){
        return;
    }
    cout<<"Ravi Kumar Gupta"<<endl;
    printName(start+1,end);
}
void print1toN(int start,int end){
    if(start>end)return;
    cout<<start<<endl;
    print1toN(start+1,end);
}
void printNto1(int start,int end){
   if(start<1)return;
   cout<<start<<endl;
   printNto1(start-1,end);

}
void print1toNbacktrack(int start,int end){
    if(start<1)return;
    print1toNbacktrack(start-1,end);
    cout<<start<<endl;
}
void printNto1backtrack(int start,int end){
    if(start>end)return;
    printNto1backtrack(start+1,end);
    cout<<start<<endl;
}
int main()
{
    int N;
    cin>>N;
    cout<<"Print Name 1toN"<<endl;
    printName(1,N);cout<<endl;
    cout<<"Print 1toN"<<endl;
    print1toN(1,N);cout<<endl;
    cout<<"Print Nto1"<<endl;
    printNto1(N,N);cout<<endl;
    cout<<"Print 1toN backtrack"<<endl;

    print1toNbacktrack(N,N);cout<<endl;
    cout<<"Print Nto1 Backtrack"<<endl;
    printNto1backtrack(1,N);cout<<endl;
}