#include<iostream>
using namespace std;
int ReturnSubsequences(string input,string output[]){
    //BaseCASE
    if(input.empty()){
        output[0]=" ";
        return 1;
    }
    string s=input.substr(1);
    //Recursive Call
    int count=ReturnSubsequences(s,output);
    for(int i=0;i<count;i++){
        output[i+count]=input[0]+output[i];
    }
    //Small Calculation
    return 2*count;
}
int main()
{
    string input;
    cin>>input;
    string *output=new string[100];
    int count=ReturnSubsequences(input,output);
    for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }

}