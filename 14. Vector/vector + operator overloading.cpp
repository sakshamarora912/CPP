#include <bits/stdc++.h>
using namespace std;
 
 class matrix{
     vector<vector<int>>mat;
     public:
     matrix(int a=0){
         mat=vector<vector<int>>(10,vector<int>(10,a));
     }
 
 
 void display(){
     for(int i=0;i<this->mat.size();i++){
         for(int j=0;j<this->mat[0].size();j++){
             cout<<this->mat[i][j]<<" ";
         }
         cout<<endl;
     }
 }
 matrix operator  +(matrix m){
     matrix res;
     for(int i=0;i<mat.size();i++){
         for(int j=0;j<mat[0].size();j++){
             res.mat[i][j]=mat[i][j]+m.mat[i][j];
            //   res[i][j]=m[i][j]+m.m[i][j];
        }
    }
    return res;
    }
};
 
int main(){
//   vector<int>v(5,10);
matrix m1(5);
matrix m2(3);
matrix res=m1+m2;
res.display();


    return 0;
}