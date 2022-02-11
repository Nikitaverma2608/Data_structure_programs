//Program to merge two unsorted array than to create a new sorted array
#include<iostream>
using namespace std;

class Array{
    int arrOne[50], arrTwo[50], arrMerge[100];
	int sizeOne, sizeTwo, i, k;
   
    public:
        Array(){
            cout<<"Enter the Size for First Array: ";
            cin>>sizeOne;
            cout<<"Enter "<<sizeOne<<" Elements for First Array: ";
            for(i=0; i<sizeOne; i++)
            {
                cin>>arrOne[i];
                arrMerge[i] = arrOne[i];
            }
            k = i;
            cout<<"\nEnter the Size for Second Array: ";
            cin>>sizeTwo;
            cout<<"Enter "<<sizeTwo<<" Elements for Second Array: ";
            for(i=0; i<sizeTwo; i++)
            {
                cin>>arrTwo[i];
                arrMerge[k] = arrTwo[i];
                k++;
            }
             }

        void Merge(){
             cout<<"\nThe New Array (Merged Array):\n";
                for(i=0; i<k; i++)
                    cout<<arrMerge[i]<<" ";
                cout<<endl;
                    }  

        void sort(){
            int key;
            for (i = 0; i <sizeOne+sizeTwo ; i++)
            {
                key = arrMerge[i];
                int j = i - 1;    //moving element smaller to key ahead in array
                while (j >= 0 && arrMerge[j] > key)   
                {
                    arrMerge[j + 1] = arrMerge[j];
                    j = j - 1;
                }
                arrMerge[j + 1] = key;
            }
        
            cout<<"\narray after sorting:\n";     //printing sorted array
            for(i=0;i<sizeOne+sizeTwo ;i++)
                cout<<arrMerge[i]<<" ";
        }               
};

int main(){
    Array obj;
    obj.Merge();
    obj.sort();
    return 0;
}