//	Program to create a queue (insert, delete and print) using arrays

#include<iostream>
using namespace std;

const int MAX = 5;
class queue{
    int arr[MAX],front,rear;
     public:
     queue()
     {
         front = rear = -1;
     }
     void addq(int);
     int delq();
};

void queue::addq(int item)
{
    if(rear==MAX-1)
    cout<<"queue is full";

    else
    {
        rear++;
        arr[rear]=item;
        if(front==-1)
        front = 0;
    }
}

int queue::delq()
{
    int data;
    if(front==-1)
    {
        cout<<"Queue is empty";
        //retun -1;
    }
    
        data=arr[front];
        arr[front]=-1;
        
        if(front==rear)
        front=rear=-1;
    else
    front++;
    return data;
}

int main()
{
    queue q1;
    q1.addq(2);
    q1.addq(5);
    int x=q1.delq();
    q1.addq(8);
    x=q1.delq();
    cout<<" "<<x;
    x=q1.delq();
    cout<<" "<<x;
}
