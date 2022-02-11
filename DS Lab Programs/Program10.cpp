// Program for InsertionSort.
#include<iostream>
using namespace std;
const int size=100;

class Sort{
    private:
       int *arr, n, temp;
    public:
       Sort(){
           cout<<"Enter the size of array : ";
           cin>>n;
           arr = new int [size];
           cout<<"Enter array elements : ";
           for(int i=0; i<n; i++){
               cin>>arr[i];
           }
       }  
       void display(){
           cout<<endl<<"Entered array elements are : ";
             for(int i=0; i<n; i++){
                 cout<<arr[i]<<"  ";
             }
       } 
       void insertionSort(){
            int key, j;
            // Loop for passes
            for (int i = 1; i <= n-1; i++)
            {
                key = arr[i];
                j = i-1;
                // Loop for each pass
                while(j>=0 && arr[j] > key){
                    arr[j+1] = arr[j];
                    j--;
                }
                arr[j+1] = key;
            }

             cout<<endl<<"Sorted array is : ";
            for(int i=0; i<n; i++){
                cout<<arr[i]<<"  ";
            }
}

};
int main(){
    Sort obj;
    obj.display();
    obj.insertionSort();
  return 0;
}
