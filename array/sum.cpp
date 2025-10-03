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
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    cout<<"sum of element"<<sum<<endl;
    return 0;
}