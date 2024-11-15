#include <bits/stdc++.h>
using namespace std;
int main(){
    // string str(5,'s');
    // string str="saksham";
    
    // string str;
    // getline(cin,str);
    // cout<<str<<endl;


    // string s1="saks";
    // string s2="saks";
    // // s1.append(s2);
    // // cout<<s1<<endl;
    // // cout<<s1+s2<<endl;
    // // cout<<s1[2];
    // if(!s2.compare(s1))
    //     cout<<"equal";
      
    // s1.clear();
    // if(!s1.empty())
    //     cout<<"empty";
    
    //ERASE 
    string str="SAKSHAM";
    // str.erase(2,4);  //delete any index value from string;
    cout<<str.find("SHA")<<endl; 
    str.insert(3,"hi");
    cout<<str.length()<<endl;
    
    for(int i=0;i<str.length();i++)
        cout<<str[i]<<endl;
    
    cout<<str.substr(3,4)<<endl;
    
    
    //integer to string
    string s1="12356";
    int x=stoi(s1);
    cout<<x+2<<endl;
    
    //string to integer
    int a=1234;
    cout<<to_string(a)+"5"<<endl;
    
    string s2="saksham";
    sort(s2.begin(),s2.end());
    cout<<s2<<endl;
    
    return 0;
}