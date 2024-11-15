#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int n;cin>>n;
    int originaln=n,reverse=0;
    // while(n>0){
    //     int lastnumber=n%10;
    //     reverse=reverse*10+lastnumber;
    //     n=n/10;
    // }
    // cout<<reverse;

    int sum=0;
    while(n>0){
        int lastnumber=n%10;
        sum+=pow(lastnumber,3);
        n=n/10;
    }
    if(sum==originaln){cout<<"armstrong number\n";}
    else{cout<<"Not armstrong number\n";
}
}
