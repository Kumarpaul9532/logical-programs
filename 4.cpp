/*  Author :-   Paul Kumar
      Date :-   23/08/2021
   Purpose :-   Factor of any number .   */

#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Enter a positive integer to print all its factor : " << endl;
    cin >> n;
    cout << "The factors of " << n << " are ";

    for (; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}