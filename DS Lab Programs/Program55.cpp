//Program to insert a node in max heap
#include <iostream>
using namespace std;
 
#define MAX 100
void heapify(int arr[], int n, int i)
{
    
    int root = (i - 1) / 2;
 
    if (arr[root] > 0) {
        
        if (arr[i] > arr[root]) {
            swap(arr[i], arr[root]);
            heapify(arr, n, root);
        }
    }
}
void insertNode(int arr[], int& n, int Key)
{
    n = n + 1;
    arr[n - 1] = Key;   
    heapify(arr, n, n - 1);
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
 
    cout << "\n";
}
int main()
{
    int arr[MAX] = { 7, 5, 3, 2, 4 };
    int n = 5;
    int key = 9;
    insertNode(arr, n, key);
    printArray(arr, n);
    return 0;
}
