#include <iostream>
using namespace std;

//no. between 1-1000 divide by 5 0r 7;
int divisible(int n,int a,int b){
    int n1=n/a;
    int n2=n/b;
    int N=n/(a*b);
    return (n1+n2-N);
}
//GCD
int gcd(int a,int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }return a;
}
int main(){
    cout<<divisible(100,5,7)<<" ";
    cout<<gcd(42,24);


    return 0;
}