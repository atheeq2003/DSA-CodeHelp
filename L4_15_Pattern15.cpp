//Pattern 20
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while(i <= n)
    {
        int j = n-i+1;
        while(j)
        {
            cout << "* ";
            j--;
        }
        cout << endl;
        i++;
    }
}