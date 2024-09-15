#include <iostream>
using namespace std;
int add(int n)
{
    if (n<=1)
    {
        return 1;
    }
    else
    {
        return (n+add(n-1));
    }
}
int main()
{
    int x,n;
    cout<<"Enter a number: ";
    cin>>n;
    x= add(n);
    cout<<x;
}
