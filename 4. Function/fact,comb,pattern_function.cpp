#include <iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for (int i=1;i<=n;i++){
            factorial*=i;
        }return factorial;
    }
int main(){
    // int n,r;
    // cin>>n>>r;
    // cout<<n<<"! = "<<fact(n)<<endl;
    // cout<<n<<"C"<<r<<" = "<<fact(n)/(fact(r)*fact(n-r));
    
    int n;
    cin>>n;
    for (int i=0;i<=n;i++){                                //   pattern
        for(int j=0;j<=i;j++){                             //   1                 1c0
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";        //   1 1               1c0 1c1 
            }cout<<endl;                                   //   1 2 1             2c0 2c1 2c2
        }                                                  //   1 3 3 1           3c0 3c1 3c2 3c3
    return 0;                                              //   1 4 6 4 1         4c0 4c1 4c2 4c3 4c4
}                                                 
