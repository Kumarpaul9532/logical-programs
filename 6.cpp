/*  Author :-   Paul Kumar
      Date :-   23/08/2021
   Purpose :-   Reverse of any number.   */

#include <iostream>
using namespace std;

int main()
{
    int n, d, y = 0, x;
    cout << "Enter any positive integer : " << endl;
    cin >> n;
    x = n;
    while (x != 0)
    {
        d = x % 10;
        y = y * 10 + d;
        x /= 10;
    }
    cout << "Reverse of " << n << " is " << y << endl;

    return 0;
}