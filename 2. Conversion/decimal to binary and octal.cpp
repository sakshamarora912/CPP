#include <iostream>  
using namespace std;  
int main()  {  
    int a[10],n,i;    
    cout<<"Enter the number to convert: ";    
    cin>>n;                
    for(i=0;n>0; i++){     
        a[i]=n%2;           //    a[i]=n%8;
        n= n/2;             //    n= n/8; 
    }  

    for(i=i-1;i>=0;i--){    //for reverse ordering
        cout<<a[i];
    }
}
 