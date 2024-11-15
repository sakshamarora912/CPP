#include <iostream>
using namespace std;
int main(){
    int n; cin>>n; 
    int m=n/2;
    for(int i=0;i<m;i++){
        for(int j=0;j<(2*m)-2-(2*i);j++){cout<<"-";}
        for(int j=0;j<=i;j++){
            if(j==i){cout<<j;}
            cout<<j<<"-";
        }
        for(int j=i;j>=1;j--){
            if(i==0){continue;}
            cout<<"-"<<j-1;
        }
        for(int j=1;j<(2*m)-2-(2*i);j++){cout<<"-";}
        cout<<endl;
     }
    //   for(int i=m-1;i>=0;i--){
    //     for(int j=3*m-3*i-1;j>=0;j--){cout<<"-";}
    //     for(int j=2*i;j>=0;j--){cout<<"-"<<j<<"-";}
    //     for(int j=3*m-3*i-1;j>=0;j--){cout<<"-";}
    //     cout<<endl;
    //  }
    //  for(int j=1;j<=5;j++){cout<<j;}
}
