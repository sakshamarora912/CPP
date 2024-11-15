#include <iostream>
using namespace std;



// int main(){
    // int a=10;
    // int *ptr=&a;
    
    // cout<<ptr<<endl;
    // ptr++;
    // cout<<ptr<<endl;  //location of pointer
    
    // cout<<*ptr<<endl;  //print value of 10 
    
    
    //print array using pointer
    
    // int a[3]={10,20,30};
    // cout<<*a<<endl; //by default pointer array store value of a[0]
    // int *ptr=a; //no need of &array
    // for(int i=0;i<3;i++){
        
    //     //1st method
    //     // cout<<*ptr<<endl;
    //     // ptr++;   //pointer with move 4 bytes a[i]=>a[i+1]
        
    //     //2nd method
    //     cout<<*(a+i)<<endl;
    // } 
        
    // //pointer to pointer
    // int a=10;
    // int *p;
    // p=&a;
    // cout<<*p<<endl;
    
    // int **q=&p;
    // cout<<*q<<endl; //show address of pointer q
    // cout<<**q<<endl; // actual value
    //return 0
//}    
    //pointer in function
    
    void swap(int *a,int *b){
        int temp=*a;
        *a=*b;
        *b=temp;
    }
    int main(){
        int a=2,b=4;
        swap(&a,&b);
        cout<<a<<" "<<b<<endl;
    
    return 0;
}