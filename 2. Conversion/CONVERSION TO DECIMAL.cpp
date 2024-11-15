#include <bits/stdc++.h>
using namespace std;

//conversion 
// int binaryToDecimal(int n){
//     int ans=0, x=1;
//     while(n>0){
//         int y = n%10;    
//         ans= ans+(x*y);   // to sum up  
//         x=x*2;            // to multiple by 2^n;
//         n=n/10;           
//     }
//     return ans;
// }

// int octalToDeciaml(int n){
//     int ans=0, x=1;
//     while(n>0){
//         int y = n%10;    
//         ans= ans+(x*y);   // to sum up  
//         x=x*8;            // to multiple by 8^n;
//         n=n/10;           
//     }
//     return ans;
// }

// HEXADECIAL CONVERSION;
int hexadecimalToDecimal(string n){
    int ans=0,x=1;
    int s=n.size();   //size of string
    for(int i=s-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            ans=ans+x*(n[i]-'0');   //ASCII value of 0 in 48
            }
        else if(n[i]>='A' && n[i]<='F'){
            ans=ans+x*(n[i]-'A'+10); 
            }
        x=x*16;
        }
        return ans;
    }
int main(){
    string n;
    cin>>n;
    // cout<<binaryToDecimal(n)<<endl;
    // cout<<octalToDeciaml(n)<<endl;
    cout<<hexadecimalToDecimal(n)<<endl;
}