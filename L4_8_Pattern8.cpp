//Pattern 13
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    char count = 'A';
    while(i<=n)
    {
        int j = 1;
        while(j <= n)
        {
            char ch = 'A'+j-1;
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}