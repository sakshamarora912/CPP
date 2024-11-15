#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtTail(int val,node* &head){
    node* n = new node(val);
    node* temp=head;
    
    if(head==NULL){
        head=n;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
     }temp->next=n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
void makecycle(int pos,node* head){
    node* start=head;
    node* startNode;
    
    int count=1;
    while(start->next!=NULL){
        if(count==pos){
            startNode=start;
        }
        start=start->next;
        count++;
    }
    start->next=startNode;
}

bool detectCycle(node* &head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        
        if(fast==slow){
            return true;
        }
    }return NULL;
}

void removeCycle(node* head){
    node* slow=head;
    node* fast=head;
    
    do{
        slow=slow->next;
        fast=fast->next->next;
    }
    while(slow!=fast);
    
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    slow->next=NULL;
}

int main(){
    node* head=NULL;
    insertAtTail(1,head);
    insertAtTail(2,head);
    insertAtTail(3,head);
    insertAtTail(4,head);
    insertAtTail(5,head);
    insertAtTail(6,head);
    makecycle(3,head);
    removeCycle(head);
    // cout<<detectCycle(head);
    display(head);

    return 0;
}