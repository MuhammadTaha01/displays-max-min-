#include<iostream>
using namespace std;
int main()
{
    int arr[5],i;
    for(i=0; i<5; i++)
    {
        cout<<"Enter an integer: ";
        cin>>arr[i];
    }
    cout<<"The value in arrays are: "<<endl;
    for(i=0; i<5; i++)
        cout<<arr[i]<<endl;
    return 0;
}
