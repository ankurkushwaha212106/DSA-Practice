#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    int max = 0;
    int largest =0;
    cout<<"enter the element of array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
largest = arr[i];
        }
        cout<<"largest element"<<largest<<endl;
    }
return 0;
}