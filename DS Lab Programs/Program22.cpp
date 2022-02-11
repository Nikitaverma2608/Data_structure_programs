//Program to search an element in the linked list.
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
bool search(node* head, int key)    //function to search an element
{
    node* temp=head;

    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
int main(){
    node* head=NULL;
    insertAtTail(head,6);
    insertAtTail(head,1);
    insertAtTail(head,5);
    insertAtTail(head,10);
    display(head);

    cout<<search(head,5);
        //or
    //cout<<search(head,4);    

    return 0;
}
