    #include<iostream>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        int a=0;
        int b=1;
        while(a<n){
            int c=a+b;
            a=b;
            b=c;
            if(a==n){
                cout<< true;
            }
            
        }
            
            cout<<false;
    }


