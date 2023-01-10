//POINTERS : it points to address of the data in the database..
#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int *p;
    p=&a;
    cout<<"pointer's value : "<<p<<endl;
    cout<<"pointer's pointed data value : "<<*p;
}