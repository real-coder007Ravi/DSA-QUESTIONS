   #include<iostream>
   using namespace std;
   void help(int arr[],int start,int size,int output,int m ){
         if(start>=size){
            for(int i=0;i<m;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            return;}
            int helpo[100];
            help(arr,start+1,size,output,m);
            int i;
            for(i=0;i<m;i++){
                helpo[i]=output[i];
            }
            helpo[i]=arr[start];
            help(arr,start+1,size,helpo,m+1);

   }
   void printSubsets(int arr[],int size){
        int output[100];
        int m=0;
        help(arr,0,size,output,m);
   }
   int main()
   {
       int arr[]={10,20,30};
       printSubsets(arr,3);
   }