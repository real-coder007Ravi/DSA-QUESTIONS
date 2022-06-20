#include<iostream>
using namespace std;
void RemoveConsectiveDuplicates(char input[]){
    char lastChar=input[0];
    int nextIndex=1;
    for(int i=1;input[i]!='\0';){
        if(input[i]==lastChar){
            i++;
        }else{
            input[nextIndex]=input[i];
            nextIndex++;
            lastChar=input[i];
            i++;

        }

    }
    input[nextIndex] = '\0';

}
int main()
{
    char input[100];
    cin>>input;
    RemoveConsectiveDuplicates(input);
    cout<<input<<endl;
}