// Program to inert new elements in an already filled array.
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
         void InsertElement()  //Function to inesrt array
         {       cout<<endl<<"Enter the index at which you want to insert new element : ";
                 cin>>index;
                 cout<<"Enter the new element : ";
                 cin>>element;  
                 for(int i=n-1; i>=index; i--)
                 { 
                     arr[i+1]=arr[i];                  
                 }
                 arr[index]=element;
                 n=n+1;
             }
          void displayNewArray(){
              cout<<"Array after insertion of new element is : ";
              for(int i=0; i<n; i++){
                 cout<<arr[i]<<"  ";
             }
          }   
};
int main(){
    Element obj;
    obj.display();
    obj.InsertElement();
    obj.displayNewArray();
    return 0;
}
