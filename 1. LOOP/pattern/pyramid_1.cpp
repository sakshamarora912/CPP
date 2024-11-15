#include <iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j<=n){count++;cout<<count;}
              else{cout<<" ";}
        }cout<<endl;
    }
   //2nd
   for(int i=n;i>=1;i--){
         for(int j=1;j<=i;j++){
            if(j<=n){cout<<i;}
               else{cout<<"  ";}
         }cout<<endl;
   }
//     // 3rd

      for(int i=1;i<=n;i++){
         for(int j=1;j<=n;j++){
             if(j<=n-i){cout<<"  ";}
               else{cout<<" *";}
         }cout<<endl;
     }
 }
