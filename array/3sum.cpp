#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of an array";
    cin>>n;
    int arr[n];
    cout<<"enter the element of array";
    for(int i=0;i<n;i++)
    {
cin>>arr[i];
    }
    int m,p;
    int sum = 0;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<m;j++)
    {
        for(int k=j+2;k<p;k++)
        {

    
    
   if(arr[i] + arr[j] + arr[k] == 0)
   {
    i!=j!=k;
  cout<<"sum of three number"<<sum<<endl;
        break;
    }
}

}
}
return 0;
}