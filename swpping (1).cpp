#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"enter x=";
    cin>>x;                                                                         
    cout<<"enter y=";
    cin>>y;
    cout<<"\n Before swapping\n";
    cout<<"\n"<<x;
    cout<<"\n"<<y;
    cout<<"\nAfter swapping";

    z=x;
    x=y;
    y=z;
   
    cout<<"\nx="<<x;
    cout<<"\ny="<<y;
    return 0;
    
}
