/*
To read a matrix of size m*n from the keyboard and display the
same on the screen using function.
*/

#include <iostream>
using namespace std;

void inputElements(int a[][100], int m, int n)
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

void outputMetrix(int a[][100], int m, int n)
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
    inputElements(a,m,n);
    outputMetrix(a,m,n);
    return 0;
}