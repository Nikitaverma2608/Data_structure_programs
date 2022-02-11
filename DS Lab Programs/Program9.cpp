// Program to delete any element from an array.
#include<iostream>
using namespace std;

const int size=100;
class Element
{    private:
         int arr[size], n, index, element;
     public:
         Element()  //Constructor to take array elements from user
         {
             cout<<"Enter the size of array : ";
             cin>>n;
             cout<<"Enter the array elements : ";
             for(int i=0; i<n; i++){
                 cin>>arr[i];
             }
         } 
         void display(){
             cout<<"Entered array elements are : ";
             for(int i=0; i<n; i++){
                 cout<<arr[i]<<"  ";
             }
         }   
         void DeleteElement()   // function to delete an element
         {
                 cout<<endl<<"Enter the index at which you want delete an element : ";
                 cin>>index;
                  
                 for(int i=index; i<n; i++)
                 { 
                     arr[i]=arr[i+1];                  
                 }
                 
                 n=n-1;
             }
          void displayNewArray(){
              cout<<"Array after deletion of an element is : ";
              for(int i=0; i<n; i++){
                 cout<<arr[i]<<"  ";
             }
          }   
};
int main(){
    Element obj;
    obj.display();
    obj.DeleteElement();
    obj.displayNewArray();
    return 0;
}
