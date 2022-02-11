// Program to create sorted list.

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




// Program to create sorted list.

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
        cout << "2. Clear Screen" << endl;
        cout << "3. End loop" << endl
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
            system("cls");
            break;

        case 3:
            exit(0);
        default:
            cout << "Enter Proper Option number " << endl;
        }

    } while (option != 5);

    return 0;
}
