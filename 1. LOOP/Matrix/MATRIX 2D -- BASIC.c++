#include <iostream>
using namespace std;

int main(){
    cout<<"Enter no of rows and columns:- ";
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cin>>a[i][j];
       }
       cout<<endl;
    }
    cout<<"Matrix "<<m<<" X "<<n<<endl<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
    
    //transpose
    cout<<"Transpose of Matrix:- \n";
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[j][i]<<" ";
        }cout<<endl;
    }

    int N=6;
    bool flag=false;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==N){
                cout<<"Element is found at {"<<i+1<<","<<j+1<<"}\n";
                flag=true;
            }
        }
    } 
    if(flag){cout<< "Element is found";}
    else{"Element Not found";}
    return 0;
}

