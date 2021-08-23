/*  Author :-   Paul Kumar
      Date :-   23/08/2021
   Purpose :-   Table of any number.   */

#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Enter a number to print the multiplication table of it : " << endl;
    cin >> n;
    for (; i <= 10; i++)
    {
        cout << n << " X " << i << " = " << n * i << endl;
    }

    return 0;
}