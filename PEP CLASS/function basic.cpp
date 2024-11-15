#include <iostream>
using namespace std;
    int sum(int a,int b,int c,int d){
        return a+b+c+d;
    }
    int sum_with_default_value(int a=20,int b=10,int c=10,int d=10){
        return a+b+c+d;
    }
     
    int main(){
        cout<<sum_with_default_value()<<endl;
        cout<<sum_with_default_value(0)<<endl;
        cout<<sum(0,0)<<endl;
        cout<<sum(0,0,0,0)<<endl;
    
}