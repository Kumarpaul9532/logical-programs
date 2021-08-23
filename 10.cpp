/*  Author :-   Paul Kumar
      Date :-   23/08/2021
   Purpose :-   Twin Prime Number .   */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, d = 0, i = 2;
    cout << "Enter two positive integer to check whether they are Twin Prime or not , other than 1 : " << endl;
    cin >> a >> b;
    if (a % 2 == 0 || b % 2 == 0)
    {
        cout << a << " and " << b << " are not Twin Prime " << endl;
    }
    else
    {
        if (abs(a - b) == 2)
        {
            while (i <= sqrt(max(a, b)))
            {
                if (a % i == 0 || b % i == 0)
                {
                    d = 1;
                    cout << a << " and " << b << " are not Twin Prime " << endl;
                    break;
                }
                ++i;
            }
            if (d == 0)
                cout << a << " and " << b << " are  Twin Prime " << endl;
        }
    }

    return 0;
}