#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"no. of character in word:- ";
    cin>>n;
    
    char arr[n];
    cin>>arr;
    
    bool check=false;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[n-1-i]){
            check=true;
            break;
        }
    }
    if(check==true) cout<<"Word is a Palindrone"<<endl;
    else cout<<"Not a Palindrone";
    return 0;
}
