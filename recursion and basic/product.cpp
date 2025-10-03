#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int product = 1;
    int lastdigit;
    while(n!=0)
    {
    lastdigit = n%10;
    n = n/10;
    product = product *lastdigit;
    }
    cout<<"product"<<product;
}