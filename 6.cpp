/*
To find a prime number within a range.
Input number for starting range: 1
Input number for ending range: 100
The prime numbers between 1 and 100 are:
2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,
89,97.
The total number of prime numbers between 1 to 100 is: 25.
*/

#include <iostream>
using namespace std;

void primeNumberCounter(int start, int endd)
{
    int count = 0; 
    cout<<"The prime numbers between "<< start <<" and " << endd << " are:"<< endl;
    for (int num = start; num <= endd; num++)
    {
        bool isPrime=true;
        if (num== 0 || num== 1)
        {
            isPrime=false;
        }
        else
        {
            for (int i=2; i<num; i++)
            {
                if (num%i== 0)
                {
                    isPrime=false;
                    break;
                }
            }
        }
        if (isPrime)
        {
            cout << num << " ";
            count++;
        }
    }
    cout << endl;
    cout << "The total number of prime numbers between " << start << " and " << endd << " is: " << count << endl;
}

int main()
{
    cout << "Enter Starting range: ";
    int start;
    cin >> start;
    cout << "Enter ending range: ";
    int endd;
    cin >> endd;
    primeNumberCounter(start, endd);
    return 0;
}
