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
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}

void evenAfterOdd(node* head){
    node* oddPos=head;
    node* evenPos=head->next;
    node* evenStart=evenPos;
    
    while(oddPos->next!=NULL && evenPos->next!=NULL){
        oddPos->next=evenPos->next;
        oddPos=oddPos->next;
        evenPos->next=oddPos->next;
        evenPos=evenPos->next;
    }
    oddPos->next=evenStart;
    if(oddPos->next!=NULL){
        evenPos->next=NULL;
    }
}

int main(){
    node* head=NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        insertAtTail(arr[i],head);
    }
    display(head);
    evenAfterOdd(head);
    display(head);
}
    