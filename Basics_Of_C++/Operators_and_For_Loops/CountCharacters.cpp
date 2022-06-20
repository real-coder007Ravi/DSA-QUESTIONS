#include<iostream>
using namespace std;
int main()
{
    char c;
    c=cin.get();
    int count_Of_Charcters=0;
    int count_Of_digits=0;
    int count_Of_Spaces=0;
    while(c!='$'){
        if(c>=97&&c<=122){
            count_Of_Charcters++;
        }else if(c>=48&&c<=57){
            count_Of_digits++;
        }else if(c==32||c==10||c==9){
            count_Of_Spaces++;
        }
        c=cin.get();
    }
    cout<<count_Of_Charcters<<" "<<count_Of_digits<<" "<<count_Of_Spaces<<endl;
}