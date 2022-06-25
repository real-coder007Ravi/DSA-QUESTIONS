#include<iostream>
using namespace std;
class Vehicle{
    int maxspeed;
    public:
     string color;
     protected:
     int numtyres;
     Vehicle(int x){
        cout<<"Vehicle's Parametrized construtor"<<" "<<x<<endl;
        numtyres=x;
     }
     void print(){
        cout<<"Vehicle"<<endl;
     }
     ~Vehicle(){
        cout<<"Vehicle's destructor"<<endl;
     }


};
class Car:virtual public Vehicle{
    public:
    int numgears;
    Car():Vehicle(5){
        cout<<"Car's default constructor"<<endl;
    }
    ~Car(){
        cout<<"Car's destructor"<<endl;
    }
    void print(){
        cout<<numgears<<endl;
        cout<<color<<endl;
        cout<<numtyres<<endl;
    }
};
class Truck:virtual public Vehicle{
    public:
     Truck():Vehicle(6){
        cout<<"Truck's constructor"<<endl;
     }
     ~Truck(){
        cout<<"Truck's destructor"<<endl;
     }
     void print(){
        cout<<"this is truck"<<endl;
     }
};
class Bus:public Car,public Truck{
    public:
     Bus():Vehicle(5){
        cout<<"Bus"<<endl;
     }
   

};
int main()
{
    Bus b;
    b.Truck::print();
}