// ARRAY: collection of similar datatype..
#include <iostream>
using namespace std;
int main()
{
    int a[4]={1,2,3,4}; //intialising and defining at same time
    int len=0;
    cout<<"enter arr len : ";
    cin>>len;
    int arr[len]; //defining with user defined length
    //input for arr
    cout<<"input:\n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    //output for arr
    cout<<"output:\n";
    for(int j:arr) // for-each loop
    {
        cout<<j<<endl;
    }
    cout<<"size of arr :"<<sizeof(arr); //shows the size of the array i.e. 4 bits for each index of the array 
}