    //CHECK CASE PROBLEM
    /* #include<iostream>
    using namespace std;
    int main()
    {
        char c;
        cin>>c;
        if(c>=65&&c<=92){
            cout<<1<<endl;       
        }else if(c>=97&&c<=122){
            cout<<0<<endl;
        }else{
            cout<<-1<<endl;
        }
    }      */
    //SUM OF EVEN NUMBERS TILL N
   /* #include<iostream>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        int i=1;
        int sum=0;
        while(i<=n){
            if(i%2==0){
                sum=sum+i;
            }
            i++;
        }
        cout<<sum;
    }   */
    //FAHRENHEIT TO CELSIUS CONVERSION
   /* #include<iostream>
    using namespace std;
    int main()
    {
        int startFah,EndFah,StepSize;
        cin>>startFah>>EndFah>>StepSize;
        while(startFah<=EndFah){
            int c=(startFah-32)*5/9;
            cout<<startFah<<"\t"<<c<<endl;
            startFah+=StepSize;
        }
    }   */
    //PATTERNS
   /* 1
      23
      345
      4567   */
      /*#include<iostream>
      using namespace std;
      int main()
      {
          int n;
          cin>>n;
          int start=1;
          int val=1;
          while(start<=n){
              int p=start;
              int j=1;
              while(j<=start){
                  cout<<p;
                  j++;
                  p++;
              }
              cout<<endl;
              start++;

          }
      }   */
      //PATTERNS
      /*---1
        --23
        -345
        4567   */
      /*  #include<iostream>
        using namespace std;
        int main()
        {
            int n;
            cin>>n;
            int i=1;
            while(i<=n){
                int k=1;
                while(k<=n-i){
                    cout<<" ";
                    k++;
                }
                int j=i;
                while(j<=2*i-1){
                    cout<<j;
                    j++;
                }
                cout<<endl;
                i++;

            }
        }           */
    
//PATTERN 03
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space++;
        }
        int star=1;
        while(star<=i){
            cout<<"*";
            star++;
        }
        star=1;
        while(star<=i-1){
            cout<<"*";
            star++;
        }
        cout<<endl;
        i++;
    }
}  */
//Salary Problem
  /*#include<iostream>
  #include<cmath>
  using namespace std;
  int main()
  {
      double basic_sal,total_sal,allow,pf,hra,da;
      char grade;
      cin>>basic_sal>>grade;
      if(grade=='A'){
          allow=1700;
      }else if(grade=='B'){
          allow=1500;
      }else{
          allow=1300;
      }
      total_sal=(basic_sal)+(0.2*basic_sal)+(0.5*basic_sal)+allow-0.11*basic_sal;
      cout<<lround(total_sal);
  }   */
//Sum Of Even and Odd Numbers presnt in the digit of a particular number
//For Example-12345 Ans-6(even numbers sum) 9(Odd Numbers Sum)
 /*#include<iostream>
 using namespace std;
 int main()
 {
     int n;
     cin>>n;
     int Even_Sum=0;
     int Odd_Sum=0;
     while(n>0){
         int ans=n%10;
         if(ans%2==0){
             Even_Sum+=ans;
         }else{
             Odd_Sum+=ans;
         }
         n=n/10;
     }
     cout<<Even_Sum<<" "<<Odd_Sum<<endl;
 }   */
//find power of a number
#include<iostream>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    int pow=1;
    int ans=1;
    while(pow<=n){
        ans*=x;
        pow++;
    }

}

