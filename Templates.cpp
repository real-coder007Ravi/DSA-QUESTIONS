#include<iostream>
using namespace std;
template<typename T>
class Pair{
    T x;
    T y;
    public:
     void Setx(T x){
        this->x=x;
     }
     T getX(){
        return x;
     }
     void SetY(T y){
         this->y=y;
     }
     T getY(){
        return y;
     }
};
template<typename V>
class PairDouble{
    V x;
    V y;
    public:
     void Setx(V x){
        this->x=x;
     }
     V getX(){
        return x;
     }
     void SetY(V y){
         this->y=y;
     }
     V getY(){
        return y;
     }
};
template<typename W>
class PairCharacter{
    char x;
    char y;
    public:
      void Setx(W x){
        this->x=x;
     }
     W getX(){
        return x;
     }
     void SetY(W y){
         this->y=y;
     }
     W getY(){
        return y;
     }
};
int main()
{
   Pair<int>p1;
   p1.Setx(10);
   p1.SetY(20);
   cout<<p1.getX()<<" "<<p1.getY()<<endl;
   PairCharacter<char>p2;
   p2.Setx('A');
   p2.SetY('B');
   cout<<p2.getX()<<" "<<p2.getY()<<endl;
   PairDouble<double>p3;
   p3.Setx(30.89);
   p3.SetY(67.3422);
   cout<<p3.getX()<<" "<<p3.getY()<<endl;
}