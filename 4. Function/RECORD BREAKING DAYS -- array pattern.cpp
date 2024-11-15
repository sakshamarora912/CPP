// RECORD BREAKING days
// ARRAY OD DAYS GIVEN
// IF DAYS x IS greater than is previous all days and x+1 day then it RECORD BREAKING days
//CALCULATE RECORD BREAKING DAY

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    if(n==1){     // if no.days is just 1
        cout<<"1"<<endl;
         return 0;      // no further processing;
         }
    int ans=0; // no. of recording breaking days
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
        mx=max(mx,a[i]);      // *MOST IMPORTANT*
    }
    cout<<"No. of record breaking days:- "<<ans<<endl;
}
