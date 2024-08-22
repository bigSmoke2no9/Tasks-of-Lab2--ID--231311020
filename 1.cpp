/*
To print the following pattern till n number of user input:
1
22
333
4444
....
*/

#include<iostream>
using namespace std;

void pattern(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter number of of row: ";
    cin >> n;
    pattern(n);
    return 0;
}