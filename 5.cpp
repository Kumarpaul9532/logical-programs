/*  Author :-   Paul Kumar
      Date :-   23/08/2021
   Purpose :-   Perfect number or not.   */

#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, s = 0;
    cout << "Enter a positive integer to check whether the number is perfect or not :" << endl;
    cin >> n;
    while (i < n)
    {
        if (n % i == 0)
            s += i;
        ++i;
    }
    if (s == n)
        cout << n << " is a Perfect Number  " << endl;
    else
        cout << n << " is not a Perfect Number  " << endl;

    return 0;
}