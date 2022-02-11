#include<iostream>
using namespace std;

// Program to illustrate use of objects and class
class developer     // this is a class developer
{ 
 public:
         
        
           void frontend()
           {   
               cout<<"I am a frontend developer!";
           }
           void backend(){
               cout<<"I am a backend developer!";
           }
           void fullstack(){
               cout<<"I am a fullstack developer!";
           }
};

int main(){
    int a;
    developer d1;     // d1 is object of class developer
               cout<<"Enter a number 1/2/3 : ";
               cin>>a;
              
               if(a==1){
                   d1.frontend();
               }
               else if(a==2){
                   d1.backend();  
               }
               else{
                   d1.fullstack();
               }
   return 0;
}
        

    