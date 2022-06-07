#include<iostream>
using namespace std;
#include<cstring>
string getCompression(string input){
    int len=input.size();
    int count=1;
    string ans;
    for(int i=0;i<len;i++){
        char result=input[i];
        if(result!=input[i+1]){
             if(count==1)
            {
                ans+=result;
            }else{
                ans+=result;
                ans+=count+'0';
            }
            count=1;
           
        }else{
            count++;
           
        }
    }
    return ans;
}
int main()
{
    string ans;
    cin>>ans;
    cout<<getCompression(ans)<<endl;
}