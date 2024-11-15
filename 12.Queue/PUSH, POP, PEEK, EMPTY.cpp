#include <iostream>
using namespace std;
#define n 20
class queue{
    int * arr, front,back;
    
    public:
    queue(){
        arr=new int[n]; front=-1; back=-1;
    }
    void push(int x){
        if(back==n-1 ){cout<<"OVERFLOW !!";return;}
        back++; arr[back]=x;
        if(front==-1){front++;}
    }
    void pop(){
        if(back==-1){cout<<"No element found";return;}
        front++;
    }
    int peek(){
        if(front==-1){cout<<"No element found";return -1;}
        return arr[front];
    }
    bool empty(){
        if(front==-1){return true;}
        return false;
    }
};
int main(){
    queue q;
    q.push(1);q.push(2);
    cout<<q.peek()<<endl; q.pop();
    cout<<q.peek()<<endl; q.pop();
    cout<<q.peek()<<endl;
    return 0;
}