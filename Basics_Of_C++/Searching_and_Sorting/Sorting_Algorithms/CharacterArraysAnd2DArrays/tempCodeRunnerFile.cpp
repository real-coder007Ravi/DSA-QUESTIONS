#include<iostream>
using namespace std;
#include<climits>
void MinimumLengthWord(char input[],char output[]){
    int min=INT_MAX;
    int count=0;
    int i;
    int j=0;
    for(i=0;input[i]!='\0';i++){
        if(input[i]==' '){
            if(count<min){
                min=count;
                j=i-min;
            }

        }else{
            count++;
        }
    }
    if(count<min){
        min=count;
        j=i-min;
    }
    int k=0;
    while(k<min){
        output[k]=input[j];
        k++;
        j++;
    }
    output[k]='\0';

}
int main()
{
    char input[100];
    cin.getline(input,100);
    char *output[]=new char[100];
    MinimumLengthWord(input,output);
}