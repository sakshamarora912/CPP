#include <bits/stdc++.h>
using namespace std;
class Stack{
    int n;
    stack<int> s1,s2;
    public:
    Stack(){n=0;}
    void push(int x){s2.push(x);n++;}
    stack<int> temp = s1; s1=s2; s2=temp;
    
    void pop(){
        if(s1.empty()){cout<<"queue is empty";}
        while(s1.size()!=1){s2.push(s1.front());  s1.pop();}
        s1.pop(n--;
        stack<int> temp=s1;s1=s2;s2=temp;
    }    
    int top(){
        if(s1.empty()){cout<<"queue is empty";return-1;}
        while(s1.size()!=1){s2.push(s1.front());  s1.pop();}
        s2.push(s1.front());
        stack<int> temp=s1; s1=s2; s2=temp;
        return s1.front();
    }
    int size(){return n;}
};
int main(){
    Stack st;
    st.push(1);st.push(2);
    cout<<st.top()<<" "; st.pop();
    cout<<st.top()<<" "; st.pop();
    cout<<st.top()<<endl;
    return 0;
}