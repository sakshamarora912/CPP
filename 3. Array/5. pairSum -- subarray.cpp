#include <iostream>
using namespace std;

bool pairSum(int a[],int n,int key){

    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(a[i]+a[j]==key){
    //             cout<<(i+1)<<" "<<(j+1)<<endl;
    //         }
    //     }
    // }

    int i=0;
    int j=n-1;

    while(i<j){
        if(a[i]+a[j]==key){
            cout<<(i+1)<<" "<<(j+1)<<endl;
            return true;
        }
        else if(a[i]+a[j]<key){i++;}
        else{j--;}
    }return false;
}

int main(){
    int a[]={12,21,34,44,52,65,70,89,92};
    int k=78;
    cout<<pairSum(a,9,k);
    return 0;
}
