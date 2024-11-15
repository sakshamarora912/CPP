#include <iostream>
using namespace std;

//string in reverse
void reverse(string s){
    if(s.length()==0){return;} //basecase
    reverse(s.substr(1)); //substr store the value after 1
    cout<<s[0];
}
//replace pi from array
void replacePi(string s){
     if(s.length()==0){return;}
     if(s[0]=='p' && s[1]=='i'){
         cout<<"3.14";
         replacePi(s.substr(2));
     }
     else{
         cout<<s[0];
         replacePi(s.substr(1));
     }
}
void towerOfHanoi(int n,char src,char helper,char dest){
    if(n==0){return;}
    towerOfHanoi(n-1,src,dest,helper);
    cout<<" move from "<<src<<" to "<<dest<<endl;
    towerOfHanoi(n-1,src,helper,dest);
}

string removeDub(string s){
    if(s.length()==0){return "";}
    char ch=s[0];
    string ans=removeDub(s.substr(1));
    if(ch==ans[0]){return ans;}
    return (ch+ans);
}
//move x's to end
string moveAllX(string s){
     if(s.length()==0){return "";}
     char ch=s[0];
     string ans=moveAllX(s.substr(1));
     if(ch=='x'){return ans+ch;}
     return (ch+ans);
}
//subset
void subsets(string s,string ans){
     if(s.length()==0){
         cout<<ans<<endl;
         return;
     }
     char ch=s[0];
     string ros= s.substr(1);
     subsets(ros,ans);
     subsets(ros,ans+ch);
}
//subset with ASCII code
void subsets2(string s,string ans){
     if(s.length()==0){cout<<ans<<endl;return;}
     char ch=s[0];
     int code=ch;
     string ros= s.substr(1);
     subsets2(ros,ans);
     subsets2(ros,ans+ch);
     subsets2(ros,ans+to_string(code));
}
//keypad alphabet corresponding to number
string keypadArr[]={"","abc","def","ghi","jkl","mno","pqr","stuv","xyz"};
void keypad(string s,string ans){
     if(s.length()==0){
         cout<<ans<<endl;
         return;
     }
     char ch=s[0];
     string code=keypadArr[ch-'0'];
     string ros=s.substr(1);
     for(int i=0;i<code.length();i++){
         keypad(ros,ans+code[i]);
     }
}
int main(){
   reverse("saksham");
   replacePi("piiiipipppip");
   towerOfHanoi(3,'A','B','C');
   cout<<removeDub("aaaaarrruiop")<<endl;
   cout<<moveAllX("axxdxdddgdxix");
   subsets("ABC","");
   subsets2("AB","");
   keypad("23","");
   return 0;
}
