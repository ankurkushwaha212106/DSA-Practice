#include<iostream>
using namespace std;
int main()
{
    int n;
    int lastdigit;
    int r;
    int reverse = 0;
    cout<<"enter the number";
    cin>>n;
    while(n!=0)
    {
        lastdigit =n%10;
        n = n/10;
        r= r + lastdigit;
    }
    cout<<"reverse of number"<<reverse<<endl;
}