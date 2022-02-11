// Program to illustrate linear search
#include<iostream>
using namespace std;

class array{
    int *p;
    int size;

    public:
           array(){

              cout<<"Enter the size of array : ";
              cin>>size;
                p= new int[size];
              cout<<"Enter the array elements : ";
              for (int i = 0; i < size; i++)
              {
                  cin>>p[i];
              }
            }

            void display(){
                cout<<"Entered array elements are : ";
                for (int i = 0; i < size; i++)
              {
                  cout<<p[i]<<"  ";
              }
            }
            
            void LinearSearch()   // function for linear search
            {
                   int a;
                   int found=0, pos;
                   cout<<endl<<"Enter the element to search : ";
                   cin>>a;
                 for(int i=0; i<size; i++)
                {
                if(p[i]==a)
                {
                        found=1;
                        pos=i+1;
                        cout<<"\n Element "<<a<<" Found At Position "<<pos;
                }
                }
                if(found==0)
                {
                        cout<<"Element Not Found..!!";
                }
                
                }

             ~array()    //destructor
                {
                    delete p;
                } 

};

int main(){
    array obj;
    obj.display();
    obj.LinearSearch();
    return 0;
}