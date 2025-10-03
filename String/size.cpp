#include<iostream>
using namespace std;
int main()
{
    char arr[] = "ankur kumar kushwaha \0";
    char i = 0;
    while(arr[i]!='\0')
    {
i++;
cout<<arr[i];
    }
    return 0;
}