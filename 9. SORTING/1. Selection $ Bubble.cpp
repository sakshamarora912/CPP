#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //  for(int i=0;i<n-1;i++){
    //      for(int j=i+1;j<n;j++){
    //          if(arr[i]>arr[j]){
    //              int temp=arr[j];
    //              arr[j]=arr[i];
    //              arr[i]=temp;
    //          }
    //      }
    //  }

    // BUBBLE SORT
     int counter =1;
     while(counter<n-1){
         for(int i=0;i<n-counter;i++){
             if(arr[i]>arr[i+1]){
                 int temp=arr[i+1];
                 arr[i+1]=arr[i];
                 arr[i]=temp;
             }
         }
         counter++;
         for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

return 0;
}
