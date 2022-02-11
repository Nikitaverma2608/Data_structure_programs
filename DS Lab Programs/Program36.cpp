// Find largest element in doubly linked list

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
    int lagrest_node();
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

//Program to find largest node in list

int dlinkedlist::lagrest_node(){
    node *max,*tmp;
    tmp=max=head;
    while (tmp!=NULL)
    {
        if(tmp->data > max->data){
            max=tmp;
        }
        tmp=tmp->next;
    }
    cout<<endl<<max->data<<endl;
    return max->data;
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
        cout<<"1.Largest Node"<<endl;
        cout<<"2.Display"<<endl;
        cout<<"3.Quit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch ( choice )
        {
        case 1:
            cout<<"\nLargest Node is : "<<endl;
            dl.lagrest_node();
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
