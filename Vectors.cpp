#include<iostream>
using namespace std;
#include<vector>
int main()
{
    //Static Allocation-We don't need to delete manually as it is based onn scope and gets deleted automatically
    vector<int>v;
    //Dynamic Allocation-We  need to delete manually as it is not based on scope  and need to be deleted automatically
    vector<int>*vp=new vector<int>();
    //Add Elements 
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    //[] is a good way to access elements and Updates them
    //Upadte
    v[1]=100;
    v[2]=3;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
      //Size()-Tells currently how many elements are there in vector
    cout<<v.size()<<endl;
    //Capacity()- tells current size of array
    cout<<v.capacity()<<endl;
    //If we try to access out of range element then we get garbage value printed
    cout<<v[7]<<endl;
    //Accessibilty problem via [] if we try to access out of range element then we get error
    //Better option is .at() as compared to []
    cout<<v.at(7)<<endl;
    //Insert not possible via []
    v[8]=100;
   
    //Delete Element-pop_back()
    v.pop_back();
    v.pop_back();
    v.pop_back();
   
}