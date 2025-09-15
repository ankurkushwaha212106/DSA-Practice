#include<iostream>
using namespace std;
int main()
{
   int n,target;
   cout<<"enter the size of array";
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   cout<<"enter element to search";
   cin>>target;
   bool found = false;
   for(int i=0;i<n;i++)
   {
      if(arr[i]==target)
      {
         found = true;
           break;
      }
      found=false;
   
   }
   if(found)
      {
          cout<<"Target found";
      }
   
   else
   {
      cout<<"target is not found"<<endl;
   }
return 0;
}
