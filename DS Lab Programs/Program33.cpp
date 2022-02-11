//	Program to search an element in doubly linked list and display its position. Forward and backward both

#include<iostream>
using namespace std;

struct node
{
    int data;
    node *prev ,*next;
};

class dlinkedlist{
    node *head ,*end;
    public:
        dlinkedlist(){
            head=end=NULL;
        }
    
    void insert(int);
    bool search(int);
    void search_backward(int);
    void display();
    
};


void dlinkedlist::insert(int n)
{
    int length;
    cout << "\n Enter the length of list : " << endl;
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cout << "\n Enter the value # " << i + 1 << "  : ";
        cin >> n;
    node *t, *temp;
    temp = new node; 
    temp->data = n;
    temp->next = NULL;
    if (head == NULL)
    {
        temp->prev = NULL;
        head = temp;
    }
    else
    {
        t = head;
        while (t->next != NULL)
            t = t->next;
        t->next = temp;
        temp->prev = t;
    }
    }
}


//Program to search a node in list

bool dlinkedlist::search(int n){
    node *tmp;
    tmp=head;
    while(tmp!=NULL){
        if(tmp->data==n){
            cout<<"\nElement fount at position : "<<tmp->data<<endl;
            return true;
        }
        tmp=tmp->next;  
        
    }
    cout<<"\n Element not found !! ";
    return false;
}

//Program to search a node in list  backward

 void dlinkedlist::search_backward(int n){
     node* tmp;
     int pos=0;
     tmp=head;
     while(tmp->next!=NULL){
         tmp=tmp->next;
     }
     while(tmp!=NULL){
         pos++;
         if(tmp->data==n){
             cout<<"Found at position : "<<tmp->data<<endl;
             return ;
         }
         if(tmp->prev!=NULL){
             tmp=tmp->prev;
         }
         else{
             break;
         }
         cout<<"Element Not Found !!"<<endl;
         return ;
     }
}

//Program to Display doubly linked list

void dlinkedlist::display(){
    if(head==NULL)
      cout<<"List is empty";
    node *t;
    t=head;
    cout<<endl;
    while(t!=NULL)
    {
        cout<<" "<<t->data;
        t=t->next;
    }
}
int main(){
    dlinkedlist dl;
    int n,choice,loc;
    dl.insert(n);
    dl.display();  

    node *head;
    do
    {
        
        cout<<"\nOperations on Doubly linked list"<<endl;   
        cout<<"1.Search()"<<endl;
        cout<<"2.Display"<<endl;
        cout<<"3.Quit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch ( choice )
        
        {
        case 1:
            cout<<"\nEnter element which you want to search : \n";
            cin>>n;
            dl.search(n);
            break;
        case 2:
            dl.display();
            cout<<endl;
            break;   
        case 3:
            break;
        default:
            cout<<"Wrong choice\n"<<endl;
        }
    }while(choice!=0);
    return 0;
}

      