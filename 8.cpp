/*  Author :-   Paul Kumar
      Date :-   23/08/2021
   Purpose :-   Printing the digits in ascending order .   */

#include <iostream>
using namespace std;

int main()
{
    int n, i = 0, d, x;
    cout << " Enter a positive integer : " << endl;
    cin >> n;
    for (; i <= 9; i++)
    {
        x = n;
        while (x != 0)
        {
            d = x % 10;
            if (d == i)
                cout << d;
            x /= 10;
        }
    }
    cout << " is the arranged order of " << n << endl;

    return 0;
}