#include <bits/stdc++.h>
using namespace std;

// bool check(string s){
//     for(int i=0;i<s.size()/2;i++){
//         if(s[i]==s[s.size()-i-1]){
//             return true;
//         }
//     }return false;
// }

bool Palindrone(string s,int start,int end){
    if(start==end){return true;}
    if(s[start]==s[end]) return Palindrone(s,start+1,end-1);
    return false;
    }

int main(){
   string s;
   cin>>s;
    // if(check(s)){cout<<"Word is a Palindrone"<<endl;}
    // else{cout<<"Not a Palindrone";}
    if(Palindrone(s,0,s.size()-1)){cout<<"Word is a Palindrone"<<endl;}
    else{cout<<"Not a Palindrone";}
    return 0;
}
