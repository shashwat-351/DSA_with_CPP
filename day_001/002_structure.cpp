//STRUCTURE: group of related data members..
#include <iostream>
using namespace std;
struct example
{
    int a,b;
};
int main()
{
    struct example a1 = {10,20};
    cout<<a1.a<<"  "<<a1.b<<endl;
    struct example a2;
    cin>>a2.a>>a2.b;
    cout<<a2.a<<"  "<<a2.b<<endl;
    cout<<"size of structure : "<<sizeof(a1);
}