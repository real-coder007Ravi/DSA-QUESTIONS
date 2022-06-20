#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int prev;
    cin>>prev;
    int curr;
    bool isdec=true;
    while(n>1){
        cin>>curr;
        if(curr==prev){
            cout<<"false";
            return 0;
        }
        else if(curr<prev){
            if(isdec==false){
                cout<<"false";
                return 0;
            }
        }else{
            if(isdec==true){
                isdec=false;
            }
        }
        n--;
        prev=curr;
    }
    cout<<"true";
}