#include <bits/stdc++.h>
using namespace std;
void reverse(char name[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(name[start++],name[end--]);
    }
}

int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){count++;}
    return count;
}
int main(){
    char name[20];
    cout<<"Enter your Name: "; cin>>name;
    cout<<"Your Name is: "; cout<<name;
    int len=getLength(name);
    cout<<"\nLength: "<<len;
    reverse(name,len);
    cout<<"\nReverse "<<name;
    return 0;
}
