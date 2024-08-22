/*
Rewrite the previous problem to make the row parameter of the
matrix as a default argument.
*/

#include <iostream>
using namespace std;

void inputElements(int a[][100], int n, int m=3)
{
    cout << "Enter Elements:" << endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout <<"a["<<i+1<<"]"<<"["<<j+1<<"]:";
            cin >> a[i][j];
        }
    }
}

void outputMetrix(int a[][100], int n, int m=3)
{
    cout<<"The Output Of matrix:" << endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout <<endl;
    }
}

int main()
{
    int m,n;
    cout <<"Enter Number of row: ";
    cin >> m;
    cout << "Enter Number of column: ";
    cin >> n;
    int a[100][100];
    inputElements(a,n,m);
    outputMetrix(a,n,m);
    return 0;
}