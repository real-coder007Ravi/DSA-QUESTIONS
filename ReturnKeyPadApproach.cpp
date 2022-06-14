#include<iostream>
using namespace std;
string getOptions(int d){
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
int keypad(int input,string output[]){
    
    if(input==0){
        output[0]=" ";
        return 1;    
    }
    int lastDigit=input%10;
    int RestNum=input/10;
    int  ans=keypad(RestNum,output);
    string options=getOptions(lastDigit);
    for(int i=0;i<options.length()-1;i++){
        for(int j=0;j<ans;j++){
            output[j+(i+1)*ans]=output[j];
        }
    }
    int d=0;
    for(int i=0;i<options.length();i++){
        for(int j=0;j<ans;j++){
        output[d]=output[d]+options[i];
        d++;
    }
    }
    return ans*options.length();


}
int main()
{
    int input;
    cin>>input;
    string *output=new string[100];
    int count=keypad(input,output);
    cout<<count<<endl;
    for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }
    
    
}