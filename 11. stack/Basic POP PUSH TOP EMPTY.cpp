#include <iostream>
using namespace std;
#define n 100
class stack{
    int* arr,top;
    public: 
        stack(){arr=new int[n];top=-1;} 
        void push(int x){
            if(top==n-1){cout<<"no value to push";return;}
            top++; arr[top]=x;
        }
        void pop(){
            if(top==-1){cout<<"No value to POP";return; }
            top--;
        }
        int Top(){
            if(top==-1){cout<<"No value in Top";return -1;}
            return arr[top];
        }
        bool empty(){return top==-1;}
};
int main(){
    stack st;
    st.push(10);st.push(20);st.push(30);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    return 0;
}