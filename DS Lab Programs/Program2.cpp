// Program to illustrate contructors and its types default, paramaterized, and copy constructor
#include<iostream>
using namespace std;

class constructor{
   int x, y;
     public:
          constructor(){
              cout<<"This is a default constructor!"<<endl;
              x=0;
              y=0;
              
          } 
          constructor(int a, int b){
               cout<<"This is a parameterized constructor!"<<endl;
               x=a;
               y=b;
              
          }  
          constructor(constructor &obj1, constructor &obj2 ){
              cout<<"This is a copy constructor!"<<endl;
              x=obj1.x;
              y=obj2.y;
              
          }
          void display(){
              cout<<"Sum of x+y is "<<x+y<<endl;
          }
    
};
int main(){
    constructor c1;
    c1.display();    //default constructor is invoked
    constructor c2(4,9); 
    c2.display();    // parameterized costructor is invoked
    constructor c3;
    c3=c1; 
    c3.display();    // copy constructor is invoked
    
    return 0;
}