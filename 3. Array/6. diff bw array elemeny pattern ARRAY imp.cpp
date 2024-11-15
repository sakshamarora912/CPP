#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    int ans=2;     //max arthimatic array lenth is always initilly 2;
    int pd=a[1]-a[0];   //previous array difference;
    int j=2;      //since starting two element is used;
    int cur=2;     // fixing current ans

    while(j<n){
        if(pd==a[j]-a[j-1]){cur++;}
        else{
            cur=2;
            pd==a[j]-a[j-1];    //change previous diff with new one
        }
        ans=max(ans,cur);
        j++;
    }
    cout<<ans;
    }
