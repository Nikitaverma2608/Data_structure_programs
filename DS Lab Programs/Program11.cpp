// Program for SelectionSort.
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
       void selectionSort(){
             int indexOfMin, temp;
                for (int i = 0; i < n-1; i++)
                {
                    indexOfMin = i;
                    for (int j = i+1; j < n; j++)
                    {
                        if(arr[j] < arr[indexOfMin]){
                            indexOfMin = j;
                        }
                    }
                    // Swap arr[i] and arr[indexOfMin]
                    temp = arr[i];
                    arr[i] = arr[indexOfMin];
                    arr[indexOfMin] = temp;
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
    obj.selectionSort();
  return 0;
}
