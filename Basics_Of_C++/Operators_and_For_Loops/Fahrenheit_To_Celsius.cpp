#include<iostream>
using namespace std;
void Fahotel(int StartfarenheitValue,int EndFahrenheitValue,int Step){
    int start=StartfarenheitValue;
    while(start<=EndFahrenheitValue){
        int CelsiusValue=(5.0/9)*(start-32);
        cout<<start<<" "<<CelsiusValue<<endl;
        start+=Step;
    }
}
int main()
{
    int Startfahrenheit,EndFahrenheit,Step;
    cin>>Startfahrenheit>>EndFahrenheit>>Step;
    Fahotel(Startfahrenheit,EndFahrenheit,Step);
}