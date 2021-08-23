/*  Author :-   Paul Kumar
      Date :-   23/08/2021
   Purpose :-   Table of 1 to 10 .   */

#include <iostream>
using namespace std;

int main()
{
    int i = 1, j = 1;
    do
    {
        j = 1;
        do
        {
            cout << i << " X " << j << " = " << j * i << endl;
            j++;
        } while (j <= 10);
        i++;
        cout << endl
             << endl;

    } while (i <= 10);

    return 0;
}