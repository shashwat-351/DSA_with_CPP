
// ARRAY: collection of similar datatype..
#include <iostream>
using namespace std;
int main()
{
    int len=0;
    cout<<"enter arr len : ";
    cin>>len;
    int arr[len];
    //input for arr
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    //output for arr
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<endl;
    }
}