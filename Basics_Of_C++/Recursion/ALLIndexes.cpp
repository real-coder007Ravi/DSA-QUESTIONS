    #include<iostream>
    using namespace std;
    int AllIndexes(int arr[],int size,int x,int output[]){
        //Base Case
        if(size==0){
            return -1;
        }
        int ans=AllIndexes(arr,size-1,x,output);
        
        if(arr[size-1]==x){
            output[ans]=size-1;
            ans++;
        }
        return ans;
    }
    void Ans(int arr[], int n, int x)
    {
        int output[n];
        int size = AllIndexes(arr, n,x, output);
        for (int i = 0; i < size; i++) {
            cout << output[i] << " ";
        }
    }
    int main()
    {
        int n;
        cin>>n;
        int *arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
         }
        int x;
        cin>>x;
        Ans(arr,n,x);
    }