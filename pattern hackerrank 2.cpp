#include <iostream>
using namespace std;
int main(){
    int n; cin>>n; 
    int m=n/2;
    for(int i=0;i<m;i++){
        for(int j=0;j<=3*m-3*i-1;j++){cout<<"-";}
        for(int j=0;j<=2*i;j++){cout<<".|.";}
         for(int j=0;j<=3*m-3*i-1;j++){cout<<"-";}
        cout<<endl;
     }
        for(int j=0;j<=3*m-3;j++){cout<<"-";}
        cout<<"WELCOME";
        for(int j=0;j<=3*m-3;j++){cout<<"-";}
        cout<<endl;
     
      for(int i=m-1;i>=0;i--){
        for(int j=3*m-3*i-1;j>=0;j--){cout<<"-";}
        for(int j=2*i;j>=0;j--){cout<<".|.";}
        for(int j=3*m-3*i-1;j>=0;j--){cout<<"-";}
        cout<<endl;
     }
}

