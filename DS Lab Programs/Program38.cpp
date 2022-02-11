//	Program to sort a doubly linked.

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
    void sort();
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

void dlinkedlist::sort(){
    node *tmp=NULL,*t=NULL;
    int p;
    if(head==NULL){
        cout<<"List is Empty : ";
        return;
    }
    else{
        for(tmp=head;tmp->next!=NULL;tmp=tmp->next){
            for(t=tmp->next;t!=NULL;t=t->next){
                if(tmp->data>t->data){
                    p=tmp->data;
                    tmp->data=t->data;
                    t->data=p;
                }
            }
        }
    }
}
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
        cout<<"1.Sort the list"<<endl;
        cout<<"2.Display"<<endl;
        cout<<"3.Quit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch ( choice )
        {
        case 1:
            cout<<"\nSorted list is : "<<endl;
            dl.sort();
            dl.display();
            break;  
        case 2:
            dl.display();
            cout<<endl;
            break;      
        case 3:
            exit(1);
        default:
            cout<<"Wrong choice\n"<<endl;
        }
    }
    return 0;
}
