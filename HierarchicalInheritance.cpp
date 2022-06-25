#include<iostream>
using namespace std;
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
class Bus:public Vehicle{
    public:
     Bus(){
        cout<<"Bus's Constructor"<<endl;
     }
     ~Bus(){
        cout<<"Bus's Destructor"<<endl;
     }
     void print(){
        cout<<"Bus"<<endl;
     }


};
class Truck:public Vehicle{
    public:
     Truck(){
        cout<<"Truck's Constructor"<<endl;
     }
     ~Truck(){
        cout<<"Truck's Destructor"<<endl;
     }
    void print(){
        cout<<"Truck"<<endl;
     }

};
int main()
{
     Truck t;
     t.print();

}