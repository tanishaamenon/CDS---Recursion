#include <iostream>
#include <string>
using namespace std;
void revn(int i)
{
    if (i>0)
    {
        cout<<i%10;
        revn(i/10);
        

    }

}
int main()
{
    int i;
    cout<<"Enter a number: ";
    cin>>i;
    revn(i);
}
