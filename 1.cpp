/*  Author :-   Paul Kumar
      Date :-   23/08/2021
   Purpose :- Sum of digits in a number.   */

#include <iostream>
using namespace std;

int main()
{
    int n, s = 0, d, x;
    cout << "Enter a positive integer : " << endl;
    cin >> n;

    x = n;
    while (x != 0)
    {
        d = x % 10;
        s += d;
        x /= 10;
    }
    cout << "The sum of digit in " << n << " is " << s << endl;

    return 0;
}