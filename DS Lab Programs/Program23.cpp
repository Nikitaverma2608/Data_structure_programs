//Program to delete an element in the linked list
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

void deletion(node* &head,int val)
{
    node* temp=head;
    while(temp->next->data!=val){
      temp=temp->next;
    }
    node* toDelete= temp->next;
    temp->next=temp->next->next;

    delete toDelete;
}
int main(){
    node* head=NULL;
    insertAtTail(head,6);
    insertAtTail(head,1);
    insertAtTail(head,5);
    insertAtTail(head,10);
    display(head);
    
    //deleting element
    deletion(head, 5);   
    display(head); 
    return 0;
}
