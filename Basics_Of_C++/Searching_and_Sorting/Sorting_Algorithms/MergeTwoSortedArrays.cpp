#include<iostream>
using namespace std;
void MergeTwoSorted(int input1[],int size1,int input2[],int size2,int output[]){
    int k=0,i=0,j=0;
    while(i<size1&&j<size2){
            if(input1[i]<input2[j]){
                output[k]=input1[i];
                k++;
                i++;
            }else{
                output[k]=input2[j];
                k++;
                j++;

            }

        }
        while(i<size1){
            output[k++]=input1[i++];
        }
        while(j<size2){
            output[k++]=input2[j++];
        }
    }


int main()
{
    int input1[]={1,5,9,12,20};
    int input2[]={2,6,8};
    int size1=5;
    int size2=3;
    int *output=new int[size1+size2];
    MergeTwoSorted(input1,size1,input2,size2,output);
    for(int i=0;i<size1+size2;i++){
        cout<<output[i]<<" ";
    }
    cout<<endl;
}