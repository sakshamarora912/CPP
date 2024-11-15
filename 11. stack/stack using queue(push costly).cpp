#include <bits/stdc++.h>
using namespace std;
class Stack{
    queue<int> q1,q2;
    public:
    void push(int x){
        q2.push(x);
         while(!q1.empty()){
            q2.push(q1.front());   //like top()
            q1.pop();
        }
    queue<int> temp = q1; q1=q2; q2=temp;
    }
    void pop(){
        if(q1.empty()){cout<<"queue is empty";}
        q1.pop();
    }int top(){
        if(q1.empty()){cout<<"queue is empty";}
        return q1.front();
    }
};
int main(){
    Stack st;
    st.push(1);st.push(2);
    cout<<st.top()<<" "; st.pop();
    cout<<st.top()<<" "; st.pop();
    cout<<st.top()<<endl;
    return 0;
}