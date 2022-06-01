#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool divided=false;
    for(int d=2;d<=n;d++){
        int i=2;
        while(i<=n){
            if(i==d){
                cout<<d<<endl;
            }
            else{
                if(d%i==0){
                    break;
                }
            }
            i++;
        }
    }
    }
