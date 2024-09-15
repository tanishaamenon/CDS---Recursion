// recursion - theory, properties
//factorial
#include <iostream>
using namespace std;
int fact(int n)
{
    if (n<=1)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1));
    }
}
int main()
{
    int x,n;
    cout<<"Enter a number: ";
    cin>>n;
    x= fact(n);
    cout<<n<<"!: "<<x;
}

