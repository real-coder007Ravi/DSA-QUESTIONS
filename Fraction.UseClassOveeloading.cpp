#include<iostream>
using namespace std;
class Fraction{
    int numerator;
    int denominator;
    public:
     Fraction(int numerator,int denominator){
        this->numerator=numerator;
        this->denominator=denominator;
     }
     void print(){
        cout<<this->numerator<<"/"<<this->denominator<<endl;
     }
     void simplify(){
        int gcd=1;
        int j=min(this->numerator,this->denominator);
;        for(int i=1;i<j;i++){
          if(this->numerator%i==0&&this->denominator%i==0){
            gcd=i;
          }
     }
     this->numerator=this->numerator/gcd;
     this->denominator=this->denominator/gcd;
     }
    /* void add(Fraction const &f2){
        int lcm=denominator*f2.denominator;
        int x=denominator/lcm;
        int y=f2.denominator/lcm;
        int ans=x*numerator+y*f2.numerator;
        numerator=ans;
        denominator=lcm;
        simplify();
     }
     void multiply(Fraction const &f2){
      numerator=numerator*f2.numerator;
      denominator=denominator*f2.denominator;
      simplify();
     }
     Fraction add(Fraction const &f2){
      int lcm=denominator*f2.denominator;
        int x=denominator/lcm;
        int y=f2.denominator/lcm;
        int ans=x*numerator+y*f2.numerator;
        Fraction fNew(ans,lcm);
        fNew.simplify();
        return fNew;
     }
     Fraction multiply(Fraction const &f2){
       numerator=numerator*f2.numerator;
      denominator=denominator*f2.denominator;
      Fraction fNew(numerator,denominator);
      fnew.simplify();
      return fNew;
     }  */
     Fraction operator+(Fraction const &f2) const{
      int lcm=denominator*f2.denominator;
        int x=denominator/lcm;
        int y=f2.denominator/lcm;
        int ans=x*numerator+y*f2.numerator;
        Fraction fNew(ans,lcm);
        fNew.simplify();
        return fNew;
     }
     Fraction operator*(Fraction const &f2) const{
      int num=numerator*f2.numerator;
      int den=denominator*f2.denominator;
      Fraction fNew(num,den);
      fNew.simplify();
      return fNew;
     }
     bool operator==(Fraction const &f2) const{
         return (numerator==f2.numerator&&denominator==f2.denominator);
     }
     



};
int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);
    Fraction f3=f1+f2;
    Fraction f4=f1*f2;
    f1.print();
    f2.print();
    f3.print();
    f4.print();
    if(f1==f2){
      cout<<"Equal"<<endl;
    }
    else{
      cout<<"Not Equal"<<endl;
}

}