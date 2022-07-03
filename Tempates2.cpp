#include<iostream>
using namespace std;
template<typename T,typename V>
class Triplet{
    T x;
    V y;
    
    public:
     void SetX(T element){
        this->x=element;
     }
     void setY(V element){
        this->y=element;
     }
     T getX(){
        return x;
     }
     V getY(){
        return y;
     }
};
int main()
{
    Triplet<int,Triplet<double,char>>p;
    p.SetX(10);
    
    Triplet<double,char>p2;
    p2.SetX(45.89);
    p2.setY('A');
    p.setY(p2);
    cout<<p.getX()<<endl;
    cout<<p.getY().getX()<<" "<<p.getY().getY()<<endl;
}