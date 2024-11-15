#include <bits/stdc++.h>
using namespace std;

int main(){
    string str="abcbababbda";
    string str2="bda";
    int flag=0;

    int l1=str.length() , l2=str2.length();

    for(int i=0,j=0;i<l1;i++){
        if(str[i]==str2[j]){
            j++;
        }
        else{
            j=0;
        }
        if(j==l2){
            cout<<"match";
            flag=1;
            break;
        }  
    }
    if(flag==0){
        cout<<"no match";
    }
   
}