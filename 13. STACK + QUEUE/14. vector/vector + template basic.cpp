#include<bits/stdc++.h>
using namespace std;
int func(vector<int>&v){
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
   }
    return sum;
   
}
double func(vector<double>&v1){
    double sum=0;
    for(int i=0;i<v1.size();i++){
        sum+=v1[i];
   }
    return sum;
}

template <class T>
T func(vector<T>&v2){
    double sum=0;
    for(int i=0;i<v2.size();i++){
        sum+=v2[i];
   }
    return sum;
}

int main(){
    vector<int>v={1,2,3,4,5,6};
    vector<double>v1={1.2,2.4,3.5,4.1,5.4,6.6};
    vector<double>v2={1.2,2.4,3.5,4.1,5.4,6.6};
    
    cout<<func(v)<< endl<<func(v1)<<endl;
    cout<<func<double>(v2)<<endl;
    return 0;
}