#include <iostream>
#include <string>
using namespace std;
void rev(char *str)
{
    if (*str)
    {
        rev(str+1);
        cout<<("%c",*str);

    }

}
int main()
{
    char s[50];
    cout<<"Enter a string: ";
    cin>>s;
    rev(s);
}
