/* Program to create doubly linked list and traverse it. */

#include<iostream>

using namespace std;

class Node {
  public:
    int key;
  int data;
  Node * next;
  Node * previous;

  Node() {
    key = 0;
    data = 0;
    next = NULL;
    previous = NULL;
  }
  Node(int k, int d) {
    key = k;
    data = d;
  }
};

class DoublyLinkedList {

  public:
    Node * head;

  DoublyLinkedList() {
    head = NULL;
  }
  DoublyLinkedList(Node * n) {
    head = n;
  }

  // 1. CHeck if node exists using key value

  Node * nodeExists(int k) {
    Node * temp = NULL;
    Node * ptr = head;

    while (ptr != NULL) {
      if (ptr -> key == k) {
        temp = ptr;
      }
      ptr = ptr -> next;
    }

    return temp;
  }

  // 2. Append a node to the list

  void appendNode(Node * n) {
    if (nodeExists(n -> key) != NULL) {
      cout << "Node Already exists with key value : " << n -> key << ". Append another node with different Key value" << endl;
    } else {
      if (head == NULL) {
        head = n;
        cout << "Node Appended as Head Node" << endl;
      } else {
        Node * ptr = head;
        while (ptr -> next != NULL) {
          ptr = ptr -> next;
        }
        ptr -> next = n;
        n -> previous = ptr;
        cout << "Node Appended" << endl;
      }
    }
  }


  // printing
  void printList() {
    if (head == NULL) {
      cout << "No Nodes in Doubly Linked List";
    } else {
      cout << endl << "Doubly Linked List Values : ";
      Node * temp = head;

      while (temp != NULL) {
        cout << "(" << temp -> key << "," << temp -> data << ") <--> ";
        temp = temp -> next;
      }
    }

  }

};

int main() {

  DoublyLinkedList obj;
  int option;
  int key1, k1, data1;
  do {
    cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. appendNode()" << endl;
    cout << "2. print()" << endl;
    cout << "3. Clear Screen" << endl << endl;

    cin >> option;
    Node * n1 = new Node();
    //Node n1;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      obj.appendNode(n1);
      //cout<<n1.key<<" = "<<n1.data<<endl;
      break;

    case 2:
      obj.printList();

      break;
    case 3:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

  return 0;
}