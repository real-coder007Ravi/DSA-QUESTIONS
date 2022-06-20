#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char c;
    cin>>c;
    int sum=0;
    int prod=1;
   
   for(int i=1;i<=n;i++){
            sum+=i;
            prod*=i;
        }

   
    if(c==1){
        cout<<sum<<endl;
     }
     else if(c==2){
         cout<<prod<<endl;
     }else{
         cout<<-1<<endl;
     }
  