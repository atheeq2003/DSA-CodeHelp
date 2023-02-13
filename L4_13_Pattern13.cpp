//Pattern 18
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while(i <= n)
    {
        int j = 1;
        char ch = n - i + 'A';
        while(j <= i)
        {
            cout << ch << " ";
            ch++;
            j++; 
        }
        cout << endl;
        i++;
    }
}