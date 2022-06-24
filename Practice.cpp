#include<iostream>
using namespace std;
class Polynomial{
      
      public:
      int *degreeCoeff;
      int capacity;
      Polynomial(){
          degreeCoeff=new int[5];
          capacity=5;
          for(int i=0;i<5;i++){
             degreeCoeff[i]=0;
          }
      }
      Polynomial(Polynomial const &d){
        this->degreeCoeff=new int[d.capacity];
        for(int i=0;i<d.capacity;i++)
          {
            this->degreeCoeff[i]=d.degreeCoeff[i];
          }
          capacity=d.capacity;

      }
      void operator=(Polynomial const &d){
        this->degreeCoeff=new int[d.capacity];
        for(int i=0;i<d.capacity;i++)
          {
            this->degreeCoeff[i]=d.degreeCoeff[i];
          }
          capacity=d.capacity;

      }
      void SetCoefficient(int degree,int coefficient){
        while(degree>=capacity){
            int *newArray=new int[2*capacity];
            for(int i=0;i<capacity;i++){
               
                newArray[i]=degreeCoeff[i];

            }
            for(int j=capacity;j<2*capacity;j++){
                newArray[j]=degreeCoeff[j];

            }
            delete [] degreeCoeff;
            degreeCoeff=newArray;
            capacity*=2;

        }
        degreeCoeff[degree]=coefficient;

      }
      void print(){
        for(int i=0;i<capacity;i++){
            if(degreeCoeff[i]==0){
                continue;
            }else{
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
        }}
        if(Max==d.capacity){
        for(int i=capacity;i<d.capacity;i++){
            SetCoefficient(i,0);
        }
        }
        Polynomial p;
        for(int i=0;i<Max;i++){
            p.SetCoefficient(i,degreeCoeff[i]+d.degreeCoeff[i]);
        }
        return p;

      }
      Polynomial operator-(Polynomial const &d){
        int Max=max(capacity,d.capacity);
        if(Max==capacity){
        for(int i=d.capacity;i<capacity;i++){
            d.SetCoefficient(i,0);
        }}
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
                p2.SetCoefficient(i+j,degreeCoeff[i]*d.degreeCoeff[i]);
            }
            p1=p1+p2;
        }
        return p1;

      }


};
int main()
{
      int count1,count2,choice;
    cin >> count1;
    
    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];
    
    for(int i=0;i < count1; i++) {
        cin >> degree1[i];
    }
    
    for(int i=0;i < count1; i++) {
        cin >> coeff1[i];
    }
    
    Polynomial first;
    for(int i = 0; i < count1; i++){
        first.SetCoefficient(degree1[i],coeff1[i]);
    }
    
    cin >> count2;
    
    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];
    
    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }
    
    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }
    
    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.SetCoefficient(degree2[i],coeff2[i]);
    }
    
    cin >> choice;
    
    switch(choice){
            // Add
        case 1:
        {
            Polynomial result1 = first + second;
            result1.print();
            break;
        }
            // Subtract
        case 2 :
        {
            Polynomial result2 = first - second;
            result2.print();
            break;
        }
            // Multiply
        case 3 :
        {
            Polynomial result3 = first * second;
            result3.print();
            break;
        }
        case 4 : // Copy constructor
        {
            Polynomial third(first);
            if(third.degreeCoeff == first.degreeCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
        case 5 : // Copy assignment operator
        {
            Polynomial fourth(first);
            if(fourth.degreeCoeff == first.degreeCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
    }
    
    return 0;
}

