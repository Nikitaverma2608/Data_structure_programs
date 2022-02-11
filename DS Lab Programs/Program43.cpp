//	program to create a circular queue(insert, delete and print) linked list

#include<iostream>
#define SIZE 100
using namespace std;

class node
{
public:
    node()
    {
        next = NULL;
    }
  int data;
  node *next;
}*front=NULL,*rear=NULL,*n,*temp,*temp1;

class cqueue
{
public:
    void insertion();
    void deletion();
    void display();
};

int main()
{
    cqueue c1;
  int ch;
  do
  {
     cout<<"operations::";
     cout<<"\n1. Insert\n2. Delete\n3. Display\n4. Exit\n\nEnter Your Choice: ";
     cin>>ch;
     switch(ch)
     {
        case 1:
          c1.insertion();
          c1.display();
          break;
        case 2:
          c1.deletion();
          break;
        case 3:
          c1.display();
          break;
        case 4:
          break;
        default:
          cout<<"\nWrong Choice!!! ";
     }
  }while(ch!=4);
  return 0;
}

void cqueue::insertion()
{
  n=new node[sizeof(node)];
  cout<<"\nEnter the Element: ";
  cin>>n->data;
  if(front==NULL)
  {
      front=n;
  }
  else
  {
      rear->next=n;
  }
  rear=n;
  rear->next=front;
}

void cqueue::deletion()
{
  int x;
  temp=front;
  if(front==NULL)
  {
      cout<<"\nCircular Queue Empty!!!";
  }
  else
  {
     if(front==rear)
     {
       x=front->data;
       delete(temp);
       front=NULL;
       rear=NULL;
     }
     else
     {
        x=temp->data;
        front=front->next;
        rear->next=front;
        delete(temp);
     }
     cout<<"\nElement "<<x<<" is Deleted";
     display();
  }
}

void cqueue::display()
{
  temp=front;
  temp1=NULL;
  if(front==NULL)
  {
    cout<<"\n\nCircular Queue Empty!!!";
  }
  else
  {
    cout<<"\n\nCircular Queue Elements are:\n\n";
    while(temp!=temp1)
    {
       cout<<temp->data<<"  ";
       temp=temp->next;
       temp1=front;
    }
  }
}
