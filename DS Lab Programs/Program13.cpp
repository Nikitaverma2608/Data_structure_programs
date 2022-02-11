//Program for binary search
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
            // array needs to be sorted in some order for binary search method
             void sort(){
              int temp;
              for(int i=0; i<size; i++){
                  for(int j=i+1; j<size; j++){
                      if(p[i]>p[j]){
                      temp=p[i];
                      p[i]=p[j];
                      p[j]=temp;  }
            
           }
              } 
              }
       
            void displaySortedElements()         //function to display sorted array
            {
                cout<<"Sorted array elements are : ";
                for (int i = 0; i < size; i++)
              {
                  cout<<p[i]<<"  ";
              }
            }

            
            int BinarySearch()     // function for binary search
             {
                int search;
                int start=0;
                int end=size;
                cout<<"Enter element to search : ";
                cin>>search;

                while(start<=end)
                {
                  int mid=(start+end)/2;

                  if(p[mid]==search){
                    cout<<"element found at "<<mid+1<<" position";
                    return 0;
                    
                  }
                  else if(p[mid]>search){
                     end=mid-1; 
                  }
                  else{
                    start=mid+1;
                  }
                }
                return -1;
    
              }

             ~array()    //destructor
                {
                    delete p;
                } 

};

int main(){
    array obj;
    obj.sort();
    obj.displaySortedElements();
    obj.BinarySearch();
    return 0;
}