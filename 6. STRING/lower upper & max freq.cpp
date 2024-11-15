#include <bits/stdc++.h>
using namespace std;
int main(){
    string str="saksham";

    //convert into UPPERCASE'
    // for(int i=0;i<str.size();i++){
    //     if(str[i]>='a' && str[i]<='z')
    //       str[i]-=32;
    // }
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<endl;

    //convert in LOWERCASE
    // for(int i=0;i<str.size();i++){
    //     if(str[i]>='A' && str[i]<='Z')
    //       str[i]+=32;
    // }
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str<<endl;

    // print string in a decreasing way
    int s[]=1234567;
    sort(s[].begin(),s[].end(),greater<int>());
    cout<<s<<endl;

    //max occurrance of letter in string
    string s1="shakalakaboomboom";
    int freq[26];

    for(int i=0;i<26;i++)
       freq[i]=0;

    for(int i=0;i<s1.size();i++)
        freq[s1[i]-'a']++;

    char ans='a';
    int maxFreq=0;

    for(int i=0;i<26;i++){
        if(freq[i]>maxFreq){
            maxFreq=freq[i];
            ans=i+'a';
        }
    }cout<<maxFreq<<" "<<ans<<endl;

    return 0;
}
