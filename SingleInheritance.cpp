#include<iostream>
using namespace std;
//Single Inheritance
class Vehicle{
    public:
     int maxSpeed;
     int numGears;
     Vehicle(){
        cout<<"Vehicle's Constructor"<<endl;
     }
     ~Vehicle(){
        cout<<"Vehicle's Destructor"<<endl;
     }
     void print(){
        cout<<"Vehicle"<<endl;
     }

};
class Car:public Vehicle{
    public:
     Car(){
        cout<<"Car's Constructor"<<endl;
     }
     ~Car(){
        cout<<"Car's Destructor"<<endl;
     }


};

int main()
{
    Car c;
    c.print();
}