#include <iostream>
using namespace std;
int binarySearch(int n,int a[],int key){
        int s=0;          //starting point of an array
        int e=n;          // end point of an array
        while(s<=e){
            int mid=(s+e)/2;
            if(a[mid]==key){return mid+1;}
            else if(a[mid]>key){e=mid-1;}
            else{s=mid+1;}
        }return -1;
}
int main(){
     int n; cin>>n;
     int a[n],key;
     for(int i=0;i<n;i++){cin>>a[i];}
     cout<<"KEY:- "; cin>>key;
     cout<<binarySearch(n,a,key);
     return 0;
}
