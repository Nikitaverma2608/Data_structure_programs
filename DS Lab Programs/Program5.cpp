// Program to implement  dynamic array  ( dynamic array is implemented using new keyword and delete keyword )
#include<iostream>
using namespace std;

class array {
   private: 
       int *p;
       int size;
   public:
       void input()    //function to input array elements
       {
           cout<<"Enter the size of array : ";
           cin>>size;
           p= new int[size];       // dymanically implementing array
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
           delete [] p;
       }
};
int main()
{
     array obj;     //creating object
     obj.input();
     obj.print();
     return 0;
}