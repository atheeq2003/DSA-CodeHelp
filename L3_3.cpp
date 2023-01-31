// Prime or Not
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 2;
    while(i < n)
    {
        if(n % i != 0)
        {
            cout << "It is a Prime Number" << " " << i << endl;
        }
        else
        {
            cout << "Not a Prime" << " " << i  << endl;
        }
        i++;
    }
}