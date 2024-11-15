#include <iostream>
using namespace std;

int sum(int n){
    if(n==0){return 0;}
    int prevSum=sum(n-1);
    return n+prevSum;
}
int power(int n,int q){
    if(q==0){return 1;}
    int prevPower=power(n,q-1);
    return n*prevPower;
}
int fact(int n){
    if(n==1){return 1;}
    int prevFact=fact(n-1);
    return n*prevFact;
}
int fib(int n){
    if(n==0||n==1){return n;}
    return fib(n-1)+fib(n-2);
}
//checking sorted array
bool sortedArry(int arr[],int n){
    if(n==1){return true;}
    bool restArray=sortedArry(arr+1,n-1);
    return (arr[0]<=arr[1] && restArray);
}
//print in decreasing order
void dec(int n){
    if(n==0){return ;}
    cout<<n<<" ";
    dec(n-1);
}
void inc(int n){
    if(n==0){return;}
    inc(n-1);
    cout<<n<<" ";
}
//first and last occurance of elemenet in array;
int firstOcc(int arr[],int n,int i,int key){
    if(i==n){return -1;}
    if (arr[i]==key){return i;}
    return firstOcc(arr,n,i+1,key);
}
int lastOcc(int arr[],int n,int i,int key){
    if(i==n){return -1;}
    int restArray=lastOcc(arr,n,i+1,key);
    if(restArray!=-1){return restArray;}
    if (arr[i]==key){return i;}
    return -1;
}

int main(){
    cout<<sum(10)<<endl;
    cout<<power(4,6)<<endl;
    cout<<fact(5)<<endl;
    cout<<fib(7)<<endl;

    int arr[]={1,2,3,4,4,6,7};
    cout<<"sorted Array "<<sortedArry(arr,7)<<endl;
    dec(10);cout<<endl;
    inc(5); cout<<endl;
    cout<<firstOcc(arr,7,0,4)<<endl;
    cout<<lastOcc(arr,7,0,4);
    return 0;
}
