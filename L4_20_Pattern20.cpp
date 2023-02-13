//Pattern 25
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 1;
    int i = 1;
    while(i <= n)
    {
        int spaces = n - i;
        while(spaces)
        {
            cout << " ";
            spaces--;
        }
        int j = 1;
        while(j <= i)
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}