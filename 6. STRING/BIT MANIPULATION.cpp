#include <bits/stdc++.h>
using namespace std;

int getBit(int n,int pos){   //bit where 1 is there
    return ((n&(1<<pos))!=0);
}
int setBit(int n,int pos){  //set bit to 1
    return ((n|(1<<pos)));
}
int clearBit(int n,int pos){  //remove bit to 0
    int mask=~(1<<pos);
    return (n&mask);
}
int updateBit(int n,int pos,int value){ //update n bit at position with val 0 or 1
     int mask=~(1<<pos);
     n=n&mask;
     return(n|(value<<pos));
}
//check whether a given no. is power of 2 or not
bool ispowerof2(int n){
    return(n && (n & n-1));   //ex:- n=8 => n=1000 ; n-1 =0001 ; n & n-1= 0000;
                                 // if n =0 so n should ne included
}

//no. of ones in given number
int numberofOnes(int n){
    int count=0;
    while(n){
        n=n&(n-1);
        count++;
    }
    return count;
}

//print subset of array using bit manipulation
void subset(int arr[],int n){
    for(int i=0;i<(1<<n);i++){      //i<<n => 2^n-1
       for(int j=0;j<n;j++){
           if(i & (1<<j)){
               cout<<arr[j]<<" ";
           }
       }cout<<endl;
    }
}

int main(){
    cout<<getBit(5,2)<<endl;
    cout<<setBit(5,1)<<endl;
    cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5,1,1)<<endl;
    cout<<ispowerof2(6)<<endl;
    cout<<numberofOnes(19)<<endl;

    int arr[4]={1,2,3,4};
    subset(arr,4);
    return 0;
}
