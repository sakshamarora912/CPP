#include <bits/stdc++.h>
#include <string>

using namespace std;
 int main(){
     string str="abcbababbba";
     string str2="abd";
     bool flag;
     int l1 =str.length();
     int l2=str2.length();
     //countt<<l2;
     int m= l1-l2+1;
     for(int i=0;i<m;i++){
        int count=0;
        while(count <=l2 && str[i+count]==str2[count]){
            count+=1;
        }
        if( count>=l2){
            flag=true;break;
        }
        else
            flag=false;

     }
if(flag==true){cout<<"Pattern matched";}
else{cout<<"not matched";}
 }