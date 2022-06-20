/*
4444
4444
4444
4444
*/



/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter No. Of Rows"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n;
            j++;
        }
        cout<<endl;
        i++;
    }
}      */
/* *
   **
   ***
   ****     */
  /*#include<iostream>
  using namespace std;
  int main()
  {
      int n;
      cout<<"Enter no of Rows: "<<endl;
      cin>>n;
      int i=1;
      while(i<=n){
          int j=1;
          while(j<=i){
              cout<<"*";
              j++;
          }
          cout<<endl;
          i++;
      }
  }    */
 /* 1
    22
    333
    4444    */
   /* #include<iostream>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter no of Rows"<<endl;
        cin>>n;
        int i=1;
        while(i<=n){
            int j=1;  
            while(j<=i){
                cout<<i;
                j++;

            }
            cout<<endl;
            i++;
        }
    }  */
/*    1
      21
      321
      4321     */
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of rows"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int p=i;
        while(j<=i){
            cout<<p;
            p--;
            j++;
        }
        cout<<endl;
        i++;
    }
}         */
/*
 A
 BB
 CCC
 */
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of rows"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch='A'+i-1;
        while(j<=i){
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}     */
/*
A
BC
CDE
DEFG    */
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of rows"<<endl;
     cin>>n;
     int i=1;
     while(i<=n){
         int j=1;
         char startChar='A'+i-1;
         while(j<=i){
             char ch=startChar+j-1;
             cout<<ch;

             j++;
         }
         cout<<endl;
         i++;
     }
}    */
/*
E
DE
CDE
BCDE
ABCDE    */
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of rows"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char starChar='A'+n-i;
        while(j<=i){
            cout<<starChar;
            starChar++;
            j++;
        }
        cout<<endl;
        i++;
    }
}  */
/*
---1
--12
-123
1234   */
    /*#include<iostream>
    using namespace std;
    int main()
    {
        int n;
        cout<<"Enter no of Rows"<<endl;
        cin>>n;
        int i=1;
        while(i<=n){
            int space=1;
            while(space<=n-i){
                cout<<" ";
                space++;
            }
            int j=1;
            while(j<=i){
                cout<<j;
                j++;
            }
            cout<<endl;
            i++;
        }
    }
   */ 
  /*
  4444
  333
  22
  1
  */
/* #include<iostream>
 using namespace std;
 int main()
 {
     int n;
     cout<<"Enter no of rows";
     cin>>n;
     int i=1;
     while(i<=n){
         int j=1;
         int p=n-i+1;
         while(j<=n-i+1){
             cout<<p;
             j++;
         }
         cout<<endl;
         i++;
     }
 }    */

 /*
 ---*
 --***
 -*****
 *******
 */
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of rows"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space++;
        }
        int num=1;
        while(num<=i){
            cout<<"*";
            num++;
        }
        num=i-1;
        while(num>=1){
            cout<<"*";
            num--;
        }
        cout<<endl;
        i++;
    }
}     */
/*
---1
--232
-34543
4567654
         */

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter No of Rows"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space++;
        }
        int num=1;
        int p=i;
        while(num<=i){
            cout<<p;
            p++;
            num++;
        }
        num=i-1;
        int ans=2*i-2;
        while(num>=1){
            cout<<ans;
            ans--;
            num--;
        }
        cout<<endl;
        i++;
    }
}
      */

/*
  _ _ *
  _ * * *
  * * * * *
  _ * * *
  _ _ *

          */
   #include<iostream>
   using namespace std;
   int main()
   {
       int n;
       cout<<"Enter no of Rows"<<endl;
       cin>>n;
       int i=1;
       int mid=(n/2)+1;
       int nomid=n-mid;
       while(i<=mid){
           int space=1;
           while(space<=mid-i){
               cout<<" ";
               space++;
           }
           int star=1;
           while(star<=(2*i)-1){
               cout<<"*";
               star++;
           }
           cout<<endl;
           i++;
       }
       i=1;
       while(i<=nomid){
           int space=1;
           while(space<=i){
               cout<<" ";
               space++;
           }
           int star=2*(nomid-i+1)-1;
           while(star>=1){
               cout<<"*";
               star--;
           }
           cout<<endl;
           i++;}

       }

   
             
             
   