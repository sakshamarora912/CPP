#include <iostream>
using namespace std;
int stack[100], n=100, top=-1;
void push(int val) {
   if(top>=n-1) cout<<"Stack Overflow"<<endl;
   else stack[++top]=val;
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
   } else cout<<"Stack is empty\n";
}
int main() {
   int ch, val;
   cout<<"1) Push \n2) Display \n3) Exit"<<endl;
   do {
      cout<<"Enter choice: ";
      cin>>ch;
      switch(ch) {
         case 1: cout<<"Enter value to be pushed: "; cin>>val;
                 push(val); break;
         case 2: display(); break;
         case 3: cout<<"Exit"<<endl;break;
         default: cout<<"\nInvalid Choice"<<endl;
      }
   }while(ch!=3);
   return 0;
}