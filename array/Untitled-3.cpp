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
    int target;
    cout<<"enter the element of target";
    cin>>target;
    bool found = false;
    for(int i =0;i<n;i++)
    {
        if(arr[i] == target)
        {
            cout<<"target element is found"<<i<<endl;
            found=true;
            break;
        }
       
    }
    if(!found)
    cout<<"target is not found in array";
    return 0;
}