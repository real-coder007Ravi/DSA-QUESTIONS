#include<iostream>
using namespace std;
string options(int d){
    if(d==2){
        return "abc";    }
    if(d==3){
        return "def";
    }
    if(d==4){
        return "ghi";
    }
    if(d==5){
        return "jkl";
    }
    if(d==6){
        return "mno";
    }
    if(d==7){
          return "pqrs";
    }
    if(d==8){
        return "tuv";
    }
    if(d==9){
        return "wxyz";
    }
    return " ";
}

void printKeypad(int input,string output=" "){
    if(input==0){
        cout<<output<<endl;
        return;
    }
    int lastDigit=input%10;
    int rem=input/10;
    string ans=options(lastDigit);

    for(int i=0;i<ans.size();i++){
        printKeypad(rem,ans[i]+output);
    }


}

int main()
{
    int input;
    cin>>input;
    string output;
    printKeypad(input,output);
}