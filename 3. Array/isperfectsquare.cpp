#include <iostream>
using namespace std;

int main(){
    int n=16,low=1,high=n;
    int mid=(low+high)/2;
    if(high==mid){
        return true;
    }
    else if(high>mid){
        mid+=1;
        mid=(low+mid)+1;
    }
    else if(high<mid){
        mid-=1;
    }

}