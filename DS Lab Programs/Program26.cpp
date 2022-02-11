// Program to delete duplicates from unsorted list


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
    void deleteunsortdulicate();
    void display();
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

void linkedlist::deleteunsortdulicate()
{
    node *t1, *t2, *temp;
    t1 = head;
    while (t1 != NULL && t1->next != NULL)
    {
        t2 = t1;
        while (t2->next != NULL)
        {
            if (t1->data == t2->next->data)
            {
                temp = t2->next;
                t2->next = t2->next->next;
                delete (temp);
            }
            else
            {
                t2 = t2->next;
            }
        }
        t1 = t1->next;
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

int main()
{
    linkedlist ls;

    int n;
    ls.insert(n);
    ls.display();

    int option;
    do
    {
        cout << "\nSelect the options." << endl;
        cout << "1. remove duplicates in unsorted list" << endl;
        cout << "2. Clear Screen" << endl;
        cout << "3. End loop" << endl
             << endl;

        cin >> option;
        switch (option)
        {
        case 1:
            cout << "\nRemove all Duplicates in Unsorted linked list : ";
            ls.deleteunsortdulicate();
            ls.display();
            break;
        case 2:
            system("cls");
            break;

        case 3:
            exit(0);
        default:
            cout << "Enter Proper Option number " << endl;
        }

    } while (option != 12);

    return 0;
}
