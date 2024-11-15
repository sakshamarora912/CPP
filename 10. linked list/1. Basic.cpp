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
void deletionAtHead(node* &head){
    node* todelete=head;;
    head=head->next;
    delete todelete;
}

void deletion(int val,node* &head){
    if(head==NULL){return;}
    if(head->next==NULL){
        deletionAtHead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
nt main(){
    node* head=NULL;
    insertAtTail(1,head);
    insertAtTail(2,head);
    insertAtTail(3,head);
    insertAtTail(4,head);
    insertAtTail(5,head);
    insertAtTail(6,head);
    deletion(3,head);
    display(head);

    return 0;
}