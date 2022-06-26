#include<iostream>
using namespace std;
class Bus{
    public:
    
     void print();
     void print2();
     void print3();

};


class Truck{
    private:
      int x;
    public:
      int y;
    protected:
     int z;
    public:
    friend class Bus;
     


};
void Bus::print(){
    Truck t;
    t.x=10;
    t.y=20;
    cout<<t.x<<" "<<t.y<<endl;
     

}
void Bus::print2(){
    Truck t;
    t.z=90;
    cout<<t.z<<endl;
}
void Bus::print3(){
    Truck r;
    r.z=34;
    cout<<r.z<<endl;
}

int main()
{
    Bus b;
    b.print();
    b.print2();
    b.print3();
}