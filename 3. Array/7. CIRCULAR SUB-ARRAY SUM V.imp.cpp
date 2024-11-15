#include <bits/stdc++.h>
using namespace std;

int kadane(int n,int a[]){
    int mx=INT_MIN;
    int currentSum=0;
    for(int i=0;i<n;i++){
        currentSum=currentSum+a[i];
        if(currentSum<0){
            currentSum=0;
        }
        mx=max(mx,currentSum);
    }
    return mx;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int wrapsum;
    int nonwrapsum = kadane(n,a);
    int totalSum=0;
    
    for(int i=0;i<n;i++){
        totalSum=totalSum+a[i];
        a[i]=-a[i];
    }
    wrapsum=totalSum+kadane(n,a);
    cout<<wrapsum<<" "<<kadane(n,a)<<" "<<totalSum<<endl;
    cout<<max(nonwrapsum,wrapsum)<<endl;
    return 0;
}