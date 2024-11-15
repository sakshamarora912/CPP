#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertAthead(int val,node* &head){
     node* n = new node(val);
     n->next=head;
     if(head!=NULL){
        head->prev=n;    //for double linked list
     }head=n;
}

void insertAtTail(int val,node* &head){
    node* n = new node(val);
    node* temp=head;
    
    if(head==NULL){
        insertAthead(val,head); return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
     }
     temp->next=n;
     n->prev=temp; //for double linked list
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
void deleteAtHead(node* head){
    node* todelete=head;
    head->next->prev=NULL;
    delete todelete;
}

void deletion(int pos,node* &head){
    if(pos==1){
        deleteAtHead(head);return;
    }
    
    node* temp=head;
    int count=1;
    
    while(temp!=NULL && count!=pos){
        temp=temp->next; count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
        temp->next->prev=temp->prev;
    }delete temp;
}
int main(){
    node* head=NULL;
    insertAtTail(1,head);
    insertAtTail(2,head);
    insertAtTail(3,head);
    insertAtTail(4,head);
    display(head);

    insertAthead(5,head);
    insertAthead(6,head);
    display(head);
    
    deletion(2,head);
    display(head);
  

    return 0;
}