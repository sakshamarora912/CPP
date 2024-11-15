#include<iostream>
using namespace std;

int main(){
string s="saksham";
string r="";
int a[123]={0};
for(int i=0;i<s.length();i++){
        if(a[s[i]]==0)
        {
            a[s[i]]=1;
        r+=s[i];
        
        
        }
        
    }


cout<<r;
}