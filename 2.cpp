/*
To print Floyd’s Triangle:
0
01
101
0101
10101
*/

#include <iostream>
using namespace std;

void floydsTriangle(int n)
{
    int x,y;
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            x=1;
            y=0;
        }
        else
        {
            x=0;
            y=1;
        }
        for(int j=1; j<=i; j++)
        {
            if(j%2==0)
            {
                cout << x << " ";
            }
            else
            {
                cout << y << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter Number of row: ";
    cin >> n;
    floydsTriangle(n);
    return 0;
}