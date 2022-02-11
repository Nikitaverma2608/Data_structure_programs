//Program to reverse a linked list
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

void insertAtTail(node* &head,int val)   //function to insert element at tail
{

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
void display(node* head)   //function to display element
{
      node* temp=head;

      while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
      }
      cout<<"NULL"<<endl;
}

node* reverse(node* &head)    //function to reverse elements
{
     node* prevptr=NULL;
     node* currptr=head;
     node* nextptr;

     while(currptr!=NULL){
         nextptr=currptr->next;
         currptr->next=prevptr;
    
         prevptr=currptr;
         currptr=nextptr;
     }
     return prevptr;
}
int main(){
    node* head=NULL;
    insertAtTail(head,6);
    insertAtTail(head,1);
    insertAtTail(head,5);
    insertAtTail(head,10);
    display(head);
    
    node* newHead= reverse(head);   //reversing
    display(newHead);
    return 0;
}
