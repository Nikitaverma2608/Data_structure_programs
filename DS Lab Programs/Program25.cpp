// Program to delete duplicates from sorted list

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
    void sorting();
    void deleteduplicate();
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
void linkedlist::sorting()
{
    int temp;
    node *ptr, *t;
    ptr = head;
    while (ptr->next != NULL)
    {
        t = ptr->next;
        while (t != NULL)
        {
            if (ptr->data > t->data)
            {
                temp = ptr->data;
                ptr->data = t->data;
                t->data = temp;
            }
            t = t->next;
        }
        ptr = ptr->next;
    }
}

// Program to delete duplicates from sorted list .

void linkedlist::deleteduplicate()
{
    node *curr = head;
    node *next_n;
    if (curr == NULL)
    {
        return;
    }
    while (curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            next_n = curr->next->next;
            free(curr->next);
            curr->next = next_n;
        }
        else
        {
            curr = curr->next;
        }
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
        cout << "1. sorting()" << endl;
        cout << "2. remove duplicates in sorted list" << endl;
        cout << "3. Clear Screen" << endl;
        cout << "4. End loop" << endl
             << endl;

        cin >> option;
        switch (option)
        {
        
        case 1:
            cout << "\n After Sorting : ";
            ls.sorting();
            ls.display();
            break;

        case 2:
            cout << "\nRemove all duplicates in sorted linked list : ";
            ls.deleteduplicate();
            ls.display();
            break;

        case 3:
            system("cls");
            break;

        case 4:
            exit(0);
        default:
            cout << "Enter Proper Option number " << endl;
        }

    } while (option != 12);

    return 0;
}
