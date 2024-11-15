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
void insertAtHead(int val,node* &head){
    node* n=new node(val);
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
    
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;

}

void insertAtTail(int val,node* &head){
    if(head==NULL){
        insertAtHead(val,head);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
void display(node* head){
    node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}
void deleteAtHead(node* &head){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node* todelete=head;
    temp->next=head->next;
    head=head->next;
    
    delete todelete;
}

void deletion(int pos,node* &head){
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(count!=pos-1){
        temp=temp->next;
        count++;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    
    delete todelete;
}


int main(){
    node* head=NULL;
    insertAtTail(1,head);
    insertAtTail(2,head);
    insertAtTail(3,head);
    insertAtTail(4,head);
    display(head);
    insertAtHead(5,head);
    display(head);
    deletion(5,head);
    display(head);
}
    