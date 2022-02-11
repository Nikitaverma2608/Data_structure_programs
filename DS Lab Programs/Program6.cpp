// Program to illustrate matrix addition

#include<iostream>
using namespace std;

const int siz=10;
class matrix
{
   private: 
   int size, m1[siz][siz], m2[siz][siz], m3[siz][siz];
   public: 
   void getmatrix();
   void displaymatrix();
   void addmatrix();
   
};

void matrix :: getmatrix()
{   
    cout<<"Enter the size of the matrix : "<<endl;
    cin>>size;
    cout<<"Enter the elements of first the matrix : "<<endl;
    for (int i = 0; i < size; i++)
    { 
        for (int j = 0; j < size; j++)
        {
            cin>>m1[i][j];
        } 
    }
     cout<<"Enter the elements of second the matrix : "<<endl;
    for (int i = 0; i < size; i++)
    { 
        for (int j = 0; j < size; j++)
        {
            cin>>m2[i][j];
        } 
    }
}

void matrix :: displaymatrix()
{   
    cout<<"first matrix : "<<endl;
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout<<m1[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
     cout<<"second matrix : "<<endl;
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout<<m2[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
}
void matrix :: addmatrix()
{   
    cout<<"addition of matrix : "<<endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
           m3[i][j]=m1[i][j] + m2[i][j];
           cout<<m3[i][j]<<" ";
        } 
        cout<<endl;
    }  
}


int main() 
{  
    matrix mat;
    mat.getmatrix();
    mat.displaymatrix();
    mat.addmatrix();

return 0;
}