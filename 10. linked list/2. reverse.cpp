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

node* reverse(node* head){
    node* preptr=NULL;
    node* currptr=head;
    node* nextptr;
    
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=preptr;
        
        preptr=currptr;
        currptr=nextptr;
    }
    return preptr;
}
node* reverseRecursion(node* &head){
    
    if(head==NULL || head->next==NULL){
        return head;
    }
    
    node* current=reverseRecursion(head->next);
    head->next->next=head;
    head->next=NULL;
    return current;
}
node* reverseK(node* &head,int k){
    node* preptr=NULL;
    node* currptr=head;
    node* nextptr;
    
    int count=0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=preptr;

        preptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=reverseK(nextptr,k);
    }
    return preptr;
}
nt main(){
    node* head=NULL;
    insertAtTail(1,head);
    insertAtTail(2,head);
    insertAtTail(3,head);
    insertAtTail(4,head);
    insertAtTail(5,head);
    insertAtTail(6,head);

    display(head);
   
    
    
    node* newhead=reverseK(head,2);
    display(newhead);
    
  
    return 0;
}