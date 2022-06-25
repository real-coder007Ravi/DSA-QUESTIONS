#include<iostream>
using namespace std;
class A{
   public:
   int size;
   int maxSpeed;
    A(){
        cout<<"A's constructor"<<endl;
    }
    ~A(){
        cout<<"A's destrcutor"<<endl;
    }
    void print(){
        cout<<"A"<<endl;
    }
};
class B{
    public:
     int height;
     B(){
        cout<<"B's constrcutor"<<endl;
     }
     ~B(){
        cout<<"B's destructor"<<endl;
     }
     void print(){
        cout<<"B"<<endl;
    }
};
class C:public A,public B{
    public:
     C(){
        cout<<"C's contructor"<<endl;
     }
     ~C(){
        cout<<"C's destrcutor"<<endl;
     }
     

};
int main()
{
    C c;
    c.A::print();}