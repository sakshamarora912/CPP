#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"no. of character in word:- ";
    cin>>n;
    cin.ignore();
    
    char arr[n+1];
    cin>>arr;
    
    cin.getline(arr,n);
    cin.ignore();
    
    int i=0;
    int currLen=0,maxLen=0;
    int st=0,maxSt=0;
    
    while(1){
       if(arr[i]==' ' || arr[i]=='\0'){
           if(currLen>maxLen){
               maxLen=currLen;     //string length
               maxSt=st;           // word length        
           }
           currLen=0;
           st=i+1;     //since i=0 we have to add 1
       }
       else
            currLen++;    
            if(arr[i]=='\0')
            break;
            i++;
    }
    cout<<maxLen<<endl;
    for(int i=0;i<maxLen;i++){
        cout<<arr[i+maxSt];
    }
    return 0;
}
