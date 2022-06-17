#include<iostream>
using namespace std;
int Subsets(int arr[],int size,int output[][20]){
    if(size<=0){
        output[0][0]=0;
        return 1;
    }
    int subsets=Subsets(arr,size,output);
    for(int i=0;i<subsets;i++){
        int col=output[i][0]+1;
        output[i+subsets][0]=col;
        output[i+subsets][1]=arr[0];
        for(int j=2;j<col+1;j++){
            output[i+subsets][j]=output[i][j-1];
        }
    }
    return 2*subsets;

}
int main()
{
    int arr[]={15,20,12};
    int output[20][20]={{0}};
    int ans=Subsets(arr,3,output);
      for( int i = 0; i < ans ;i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }}
    cout<<ans<<endl;
}