#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if((ch > char(96)) && (ch < char(123)))
    {
        cout << "Lowercase" << endl;
    }
    else if((ch > char(64)) && (ch < char(91)))
    {
        cout << "Uppercase" << endl;
    }
    else if((ch > char(47)) && (ch < char(58)))
    {
        cout << "Numeric" << endl;
    }
}