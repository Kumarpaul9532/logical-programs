/*  Author :-   Paul Kumar
      Date :-   23/08/2021
   Purpose :-   Twisted Prime Number .   */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i = 2, d, s = 0, x, y = 0;
    cout << "Enter a positive integer to check whether the number is Twisted Prime or not : " << endl;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n << " itself is not prime " << endl;
    }

    for (; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            s = 1;
            cout << n << " itself is not prime " << endl;
            break;
        }
    }
    if (s == 0)
    {
        x = n;
        do
        {
            d = x % 10;
            y = y * 10 + d;
            x /= 10;

        } while (x != 0);

        if (y % 2 == 0)
        {
            cout << n << " is not a Twisted Prime " << endl;

            goto end;
        }
        i = 2;

        while (i <= sqrt(y))
        {

            if (y % i == 0)
            {
                cout << n << " is not a Twisted Prime " << endl;
                s = 1;
                break;
            }
            ++i;
        }
        if (s == 0)
            cout << n << " is Twisted Prime " << endl;
    }
end:
    // cout << n << " is not a Twisted Prime " << endl;
    return 0;
}