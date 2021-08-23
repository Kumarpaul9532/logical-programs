/*  Author :-   Paul Kumar
      Date :-   23/08/2021
   Purpose :-   Palindrome number or not .   */

#include <iostream>
using namespace std;

int main()
{
    int n, x, y = 0, d;
    cout << "Enter a positive integer to check whether the number is Palindrome or not : " << endl;
    cin >> n;
    x = n;
    while (x != 0)
    {
        d = x % 10;
        y = y * 10 + d;
        x /= 10;
    }
    if (y == n)
        cout << n << " is a Palindrome Number " << endl;
    else
        cout << n << " is not a Palindrome Number " << endl;
    return 0;
}