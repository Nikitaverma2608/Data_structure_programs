// Program to print array values which user has entered
#include<iostream>
using namespace std;

class array {
 private:
       int arr[100];
       int n;
 public:
       void input()     // function to take array elements for user
       {    
           cout<<"Enter the size of array : ";
           cin>>n;
           cout<<"Enter the array elements : ";
           for(int i=0; i<n; i++){
               cin>>arr[i];
           }
       }
       void print()     //function to print array elements 
       {
           cout<<"Entered array elements are : ";
           for(int i=0; i<n; i++){
               cout<<arr[i]<<endl;
           }
       }
};
int main()
{
     array obj;  //creating object
     obj.input();
     obj.print();
     return 0;
}