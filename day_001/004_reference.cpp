//REFERENCE : it is a reference or an alias name of any variable..
#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int &r=a;
    r=20;
    cout<<"a: "<<a<<"  r:"<<r;
}