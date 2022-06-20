#include<iostream>
using namespace std;
//Time Complexity
//SelectionSort=>Best Case-O(n^2)   Average Case-O(n^2)   Worst Case-O(n^2)
 void SelectionSort(int input[],int size){
    for(int i=0;i<size-1;i++){
        int min=input[i],minindex=i;
        for(int j=i+1;j<size;j++){
            if(input[j]<min){
                min=input[j];
                minindex=j;
            }


        }
        int temp=input[i];
        input[i]=input[minindex];
        input[minindex]=temp;
    }
}
//Time Complexity
//BubbleSort=>Best Case-O(n)   Average Case-O(n^2)   Worst Case-O(n^2)
void BubbleSort(int input[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(input[j]>input[j+1]){
                int temp=input[j];
                input[j]=input[j+1];
                input[j+1]=temp;
}
        }
    }
}
//Time Complexity
//InsertionSort=>Best Case-O(n)   Average Case-O(n^2)   Worst Case-O(n^2)
void InsertionSort(int input[],int size){
    for(int i=1;i<size;i++){
        int current=input[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(current<input[j]){
                input[j+1]=input[j];
            }else{
                break;
            }
        }
        input[j+1]=current;
    }
}
int main()
{
      int input[]={3,2,8,5,12,9};
      SelectionSort(input,6);
      for(int i=0;i<6;i++){
          cout<<input[i]<<" ";
      }
      cout<<endl;
    BubbleSort(input,6);
      for(int i=0;i<6;i++){
          cout<<input[i]<<" ";
      }
      cout<<endl;
      InsertionSort(input,6);
      for(int i=0;i<6;i++){
          cout<<input[i]<<" ";
      }
      cout<<endl;
}