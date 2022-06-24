#include<iostream>
using namespace std;
class Polynomial{
    int *degreeCoeff;
    int capacity;
    public:
    //Default Constructor
     Polynomial(){
        degreeCoeff=new int[5];
        capacity=5;
        for(int i=0;i<5;i++){
            degreeCoeff[i]=0;
        }
     }
     //Copy Constructor
     Polynomial(Polynomial const &d){
        this->degreeCoeff=new int[d.capacity];
        for(int i=0;i<d.capacity;i++){
            this->degreeCoeff[i]=d.degreeCoeff[i];
        }
        capacity=d.capacity;

     }
     //Copy Assignment Operator
     void operator=(Polynomial const &d){
         this->degreeCoeff=new int[d.capacity];
        for(int i=0;i<d.capacity;i++){
            this->degreeCoeff[i]=d.degreeCoeff[i];
        }
        capacity=d.capacity;

     }
     void SetCoefficient(int degree,int coefficient){
        while(degree>=capacity){
            int *newarray=new int[2*capacity];
            for(int i=0;i<capacity;i++){
                newarray[i]=degreeCoeff[i];
            }
            for(int j=capacity;j<2*capacity;j++){
                newarray[j]=degreeCoeff[i];
            }
            delete [] degreeCoeff;
            degreeCoeff=newarray;
            capacity=capacity*2;
        }
        degreeCoeff[degree]=coefficient;

     }
     void print(){
        for(int i=0;i<capacity;i++){
            if(degreeCoeff[i]==0)continue;
            else{
                cout<<degreeCoeff[i]<<"x"<<i<<" ";
            }
        }
        cout<<endl;
     }
     Polynomial operator+(Polynomial const &d){
          int Max=max(capacity,d.capacity);
          if(Max==capacity){
            for(int i=d.capacity;i<capacity;i++){
                d.SetCoefficient(i,0);

            }

          }
          if(Max==p2.capacity){
            for(int i=capacity;i<d.capacity;i++){
                SetCoefficient(i,0);
            }

          }
          Polynomial p;
          for(int i=0;i<Max;i++){
            p.SetCoefficient(i,degreeCoeff[i]+d.degreeCoeff[i]);
          }


     }
     Polynomial operator-(Polynomial const &d){
         int Max=max(capacity,d.capacity);
          if(Max==capacity){
            for(int i=d.capacity;i<capacity;i++){
                d.SetCoefficient(i,0);

            }

          }
          if(Max==d.capacity){
            for(int i=capacity;i<d.capacity;i++){
                SetCoefficient(i,0);
            }

          }
          Polynomial p;
          for(int i=0;i<Max;i++){
            p.SetCoefficient(i,degreeCoeff[i]-d.degreeCoeff[i]);
          }
          return p;



     }
     Polynomial operator*(Polynomial const &d){
        Polynomial p1;
        for(int i=0;i<capacity;i++){
            Polynomial p2;
            for(int j=0;j<d.capacity;j++){
                p2.SetCoefficient(i+j,degreeCoeff[i]*p2.degreeCoeff[i]);
            }
            p1=p1+p2;
        }
        return p1;


     }

};
int main()
{
    Polynomial p1(
}