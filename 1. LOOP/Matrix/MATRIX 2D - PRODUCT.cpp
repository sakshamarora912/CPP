#include <iostream>
using namespace std;
int main(){
    //muliply two Matrix;
    
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int A[n1][n2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>A[i][j];
        }
    }
    int B[n2][n3];
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>B[i][j];
        }
    }
    
    int C[n1][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            C[i][j]=0;
        }
    }
    
    for(int i=0;i<n1;i++){
         for(int j=0;j<n3;j++){
             for(int k=0;k<n2;k++){
                 C[i][j]+=A[i][k]*B[k][j];
             }
         }     
    }
    
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<C[i][j]<< " ";
        }cout<<endl;
    }
    return 0;
}