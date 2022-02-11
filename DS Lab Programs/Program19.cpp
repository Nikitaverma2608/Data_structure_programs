//Program to create linked list.
#include<iostream>
#include<conio.h>
using namespace std;

class node{
  public:
    int data;
    node* next;
  
    node(int val){
      data= val;
      next=NULL;
    }
};
void insertAtTail(node* &head,int val){

      node*  n = new node(val);
      if(head==NULL){
          head=n;
          return;
      }

      node* temp=head;
      while(temp->next!=NULL) {
        temp=temp->next;
      } 
      temp->next=n; 
}
void display(node* head){
      node* temp=head;

      while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
      }
      cout<<"NULL";
}
int main(){
    node* head=NULL;
    insertAtTail(head,6);
    insertAtTail(head,2);
    insertAtTail(head,4);
    display(head);
    return 0;
}
