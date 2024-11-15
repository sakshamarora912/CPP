#include<iostream>
using namespace std;
int main(){

char string;
cin>> string;;
bool check=false
for(int i=0;i<string.length(); i++)
{
if(string[i]==string[n-1-i]){
  check=true;
  break;
}
if(check==true){cout<<"palindrine"}
else{cout<<"not"}
}