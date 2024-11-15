#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int size, int x){
    int low=0,high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]>x)
            high=mid-1;
        else
           low=mid+1;
    }
    return -1;
}
int binary_search_rec(int arr[],int size,int x,int low,int high){
    if(low>high)
        return -1;
    int mid=(low+high)/2;
    if(arr[mid]==x)
            return mid;
        else if(arr[mid]>x)
            return binary_search_rec(arr,size,x,low,mid-1);
        else
            return binary_search_rec(arr,size,x,mid+1,high);
}

int main(){
    int arr[]={12,23,54,67,64,23};
    cout<<binary_search(arr,6,23)<<" ";
    cout<<binary_search_rec(arr,6,64,0,5);
}

