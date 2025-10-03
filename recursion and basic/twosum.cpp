#include<bits/stdc++.h>
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
    int target;
    cout<<"enter the target element";
    cin>>trget;
    for(int i=0;i<n;i++)
    {
        
        for(int j=i+1;j<n;j++)
        {
if(arr[i]==target)
{
    sum = target;
}
        }
cout<<"target is found"<<target<<endl;
        
    }
    return 0;

}