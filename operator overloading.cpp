#include<bits/stdc++.h>
 using namespace std;
class ComplexNum{
    int real;
    int img;
    
    public:
    ComplexNum(int real,int img){
        this->real=real;
        this->img= img;
   }
    void display(){
        cout << real<<"+"<<img<<"i"<< endl;
        
    }
    // ComplexNum plus(ComplexNum c){
        // ComplexNum res;
        // res.real=this->real +c.real;
        // res.img=this->img +c.img;
        // return res;
        
        // int r=this->real+c.real;
        // int i=this->img+c.img;
        // return ComplexNum(r,i);
    // }
    ComplexNum operator +(ComplexNum c){
        int r=this->real+c.real;
        int i=this->img+c.img;
        return ComplexNum(r,i);
    }
};   
    
    
 int main(){
  ComplexNum c1(5,1);
  ComplexNum c2(15,4);
//   ComplexNum c3 =c1.plus(c2);
   ComplexNum c3 =c1+c2;
  c3.display();
    return 0;
}