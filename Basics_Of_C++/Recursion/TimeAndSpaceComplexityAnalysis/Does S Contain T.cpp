#include<iostream>
using namespace std;
bool helper(char arr1[],int size1,char arr2[],int size2){
    if(size2==0){
        return true;}

    if(size1==0){
        return false;
    }
    if(arr1[size1-1]==arr2[size2-1]){
        return helper(arr1,size1-1,arr2,size2-1);}
        return helper(arr1,size1,arr2,size-2);


}
bool ans(char arr1[],char arr2[]){
    int m=arr1.size();
    int n=arr2.size();
    bool Ans=helper(arr1,m,arr2,n);
    cout<<Ans<<endl;
}
int main()
{
    char arr1[]="abchjsgsuohhdhyrikkknddg"
    char arr2[]="coding"
    bool result=ans(arr1,arr2);
    cout<<result<<endl;
}