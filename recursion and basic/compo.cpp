#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int boolflag = false;
    for(int i=0;i<n;i++)
    {
        if(n%i==0)
        {
boolflag=true;
break;
        }
    
    cout<<"composite number";
    }
    return 0;
    
    
    }
