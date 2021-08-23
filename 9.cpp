/*  Author :-   Paul Kumar
      Date :-   23/08/2021
   Purpose :-   Prime number or not .   */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i = 2, d = 0;
    cout << "Enter a positive integer to check whether the number is Prime or not : " << endl;
    cin >> n;
    for (; i <=sqrt(n); i++)
    {
        if (n % i == 0)
        {
            d = 1;
            cout << n << " is not a Prime number " << endl;
            break;
        }
    }
    if (d == 0)
        cout << n << " is a Prime number " << endl;

    return 0;
}