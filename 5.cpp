/*
For a given set of non-negative integers and a value sum, the task
is to check if there is a subset of the given set whose sum is equal
to the given sum.
Example:
Input set[] = {5, 129, 6, 10, 45, 7, 9},
Sum = 11
Output: True (Explanation: There is a subset {5,6} with sum 11)
Input set[] = {5, 129, 6, 10, 45, 7, 9},
Sum = 450
Output: False (Explanation: There is no such subset with sum 450)
*/

#include <iostream>
using namespace std;

void subsetFinder(int a[], int n)
{
    cout << "Enter Total: ";
    int sum;
    cin >> sum;
    bool check=false;
    for(int i=0; i<n-1; i++)
    {
        for (int j=i; j<n; j++)
        {
            if(a[i]+a[j]==sum)
            {
                check=true;
                cout << "True. ";
                cout << "subset: [" <<a[i]<< ", " << a[j] <<"]" << endl;
                break;
            }
        }
    }
    if(!check)
    {
        check=false;
        cout << "False. ";
        cout << "subset: NULL" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter number of set elements:";
    cin >> n;
    int a[n];
    cout << "Enter set Elements:" << endl;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    subsetFinder(a,n);
    return 0;
}