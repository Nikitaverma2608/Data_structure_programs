//	Program to remove duplicates from doubly linked list.
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
    void remove_duplicate();
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

//Program to remove duplicate nodes

void dlinkedlist::remove_duplicate(){
    node* tmp,*t,*i;
    if(head==NULL){
        cout<<"List is Empty : "<<endl;
        return;
    }
    else{
        for(tmp=head;tmp!=NULL;tmp=tmp->next){
            for(i=tmp->next;i!=NULL;i=i->next){
                if(tmp->data==i->data){
                    t=i;
                    i->prev->next=i->next;
                    if(i->next!=NULL){
                        i->next->prev=i->prev;
                        t=NULL;
                    }
                }
            }
        }
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
    while (1)
    {
        
        cout<<"\nOperations on Doubly linked list"<<endl;
        cout<<"1.Remove Duplicates"<<endl;
        cout<<"2.Display"<<endl;
        cout<<"3.Quit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch ( choice )
        {
        case 1:
            dl.remove_duplicate();
            cout<<"\nAfter Removing Duplicates"<<endl;
            dl.display();
            break;
        case 2:
            dl.display();
            cout<<endl;
            break;   
        case 3:
            exit(0);
        default:
            cout<<"Wrong choice\n"<<endl;
        }
    }
    return 0;
}
