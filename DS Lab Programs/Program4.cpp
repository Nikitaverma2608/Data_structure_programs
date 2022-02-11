// Program to print array values using pointers

#include<iostream>
using namespace std;

class array {
    int *p;
    int arr[100];
    int size;

    public:
        void input()      //function to take input
        {
           cout<<"Enter the size of array : ";
           cin>>size;
           p = &arr[0];      // array using pointer
           cout<<"Enter the array elements : ";
           for(int i=0; i<size; i++){
               cin>>p[i];
           }
        }

        void print()     //function to print array elements 
       {
           cout<<"Entered array elements are : ";
           for(int i=0; i<size; i++){
               cout<<p[i]<<endl;
           }
       }
     
};
int main() 
{
    array obj;
    obj.input();
    obj.print();

    return 0;
}