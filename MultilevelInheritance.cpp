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
class MiniBus:public Bus{
   public:
    MiniBus(){
      cout<<"MiniBus's Constructor"<<endl;
    }
    ~MiniBus(){
      cout<<"MiniBus's Destrcutor"<<endl;
    }
   /* void print(){
      cout<<"MiniBus"<<endl;
    }  */

};

int main()
{
    MiniBus b;
    b.print();
}