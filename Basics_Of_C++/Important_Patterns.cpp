/*Print the following patterns:
1)
55555
45555
34555
23455
12345    */
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=n;
    int j,k;
    while(i>=1){
        int k=i;
        int j=1;
        while(j<=n){
            if(k<=n){
            cout<<k;}
            else{
                cout<<n;
            }
            k++;
            j++;
        }
        cout<<endl;
        i--;
    }
}    */
/*2)
ABCDE
ABCD
ABC
AB
A   */
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch='A'+j-1;
        while(j<=n-i+1){
            cout<<ch;
            ch++;
            j++;

        }
        cout<<endl;
        i++;
    }
}    */

/*3)
12344321
123**321
12****21
1******1*/
/*#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int i=n;
     while(i>=1){
         int j=1;
        
         while(j<=n){
             if(j<=i){
                 cout<<j;
             }else{
                 cout<<"*";
             }
             
             j++;}
             while(j>=1){
                 if(j<=i){
                     cout<<j;
                 }else{
                     cout<<"*";
                 }
                 j--;
             }
             i--;
             cout<<endl;
             
         }
     }
}

     */


