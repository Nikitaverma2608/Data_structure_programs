// Program to find out length of linked list.

#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *current = NULL;
};

class linkedlist
{
    node *head;

public:
    linkedlist()
    {
        head = NULL;
    }

    void insert(int);
    void append(int);
    void display();
    void count();
    ~linkedlist()
    {
        node *temp = head;
        while (head != NULL)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

// Program to insert an element in the linked list

void linkedlist::insert(int n)
{
    int length;
    cout << "\n Enter the length of node/data which u want to fill  : " << endl;
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cout << "\n Enter the value # " << i + 1 << "  : ";
        cin >> n;

        node *temp = new node, *t;
        temp->data = n;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            t = temp;
        }
        else
        {
            t->next = temp;
            t = t->next;
        }
    }
}

void linkedlist::append(int n)
{

    node *temp, *t;
    temp = new node;
    temp->data = n;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        t = head;
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = temp;
    }
}


void linkedlist::display()
{
    if (head == NULL)
    {
        cout << "\n list is empty";
    }

    node *t;
    t = head;
    while (t != NULL)
    {
        cout << " " << t->data;
        t = t->next;
    }
}

// Program to find out length of linked list.

void linkedlist::count()
{
    if (head == NULL)
    {
        cout << "\nlist is empty";
    }
    else
    {
        node *t;
        int counter = 0;
        t = head;
        while (t != NULL)
        {
            counter++;
            t = t->next;
        }
        cout << "\n Total no of node is :" << counter << endl
             << endl;
    }
}

int main()
{
    linkedlist ls;

    int n;
    ls.insert(n);
    ls.display();
    ls.count();

    int option;
    do
    {
        cout << "\nSelect the options." << endl;
        cout << "1. appendNode()" << endl;
        cout << "2. Find length" << endl;
        cout << "3. Clear Screen" << endl;
        cout << "4. End loop" << endl
             << endl;

        cin >> option;
        switch (option)
        {
        case 1:
            cout << "\n Enter the value which u want to append : ";
            cin >> n;
            ls.append(n);
            ls.display();
            ls.count();
            break;

        case 2:
             ls.count();
        
        case 3:
            system("cls");
            break;

        case 4:
            exit(0);
            break;
        default:
            cout << "Enter Proper Option number " << endl;
        }

    } while (option != 5);

    return 0;
}

