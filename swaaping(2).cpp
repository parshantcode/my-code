#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a=";
    cin>>a;
     cout<<"enter b=";
     cin>>b;
 
     cout<<"\nBefore swapping a is " << a <<" and b is "<< b;
 
     a=a+b;
     b=a-b;
     a=a-b; 
   
     cout<<"\nAfter swapping a is " <<a<<" and is " << b;
 
     return 0;



}