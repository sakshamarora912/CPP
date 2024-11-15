#include <bits/stdc++.h>
using namespace std;
int linearSearch(int n,int a[],int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){return i+1;}
    }return 0;
}
int main(){
    int n,key;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    cout<<"KEY";
    cin>>key;
    cout<<linearSearch(n, a, key);
    return 0;
}
