#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, j=0;
    int counter =0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
     while(j<n-1){
         for(int i=0;i<n-j-1;i++){
             if(arr[i]>arr[i+1]){
                 int temp=arr[i+1];
                 arr[i+1]=arr[i];
                 arr[i]=temp;
             }
            counter++;
         }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
          j++;
    }
    cout<<"\n sorted array\n";
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<"\nNo of itrs : "<<counter;

return 0;
}
