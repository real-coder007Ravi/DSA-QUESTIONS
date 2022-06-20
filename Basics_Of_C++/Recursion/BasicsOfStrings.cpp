#include<iostream>
using namespace std;
int main()
{
    //Declaration of string same as character arrays
    string s1="abc";
    cout<<s1<<endl;
    string s2="def";
    cout<<s2<<endl;
    //Dynamically Allocation
    string *sp=new string;
    *sp="def";
    cout<<sp<<endl;
    cout<<*sp<<endl;
    string s3;
    cin>>s3;
    cout<<s3<<endl
    getline(cin,s3);
    string d="defdef";
    cout<<d[0]<<endl;
    string s4=s1+s2;
    cout<<s4<<endl;
    cout<<s4.size()<<endl
    cout<<s4.length()<<endl;
    cout<<s4.substr(3,5)<<endl;

    cout<<s4.find("def")<<endl;
    
}