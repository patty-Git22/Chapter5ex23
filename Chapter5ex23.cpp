/*
*/

#include <iostream>
using namespace std;
int main()
{
    const int minimum = 0,
        max = 10;

    char symbol = '+';

    cout << "Pattern A: " << endl;

    for (int i = minimum; i < max; i++)
    {
        for (int j = minimum; j <= i; j++)
        {
            cout << symbol;
        }
        cout << endl;
    }

    cout << "\n\nPattern B: " << endl;
    for (int i = minimum; i < max; i++)
    {
        for (int j = max; j > i; j--)
        {
            cout << symbol;
        }
        cout << endl;
    }

    return 0;
}