#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the element of array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"element of array are"<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<endl;
}
return 0;
}