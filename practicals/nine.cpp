#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "What number should be added: ";
    cin >> number;

    const int ones = number % 10;

    number = number / 10;
    const int tens = number % 10;

    number = number / 10;
    const int hundreds = number % 10;

    number = number / 10;
    const int thousands = number % 10;

    number = number / 10;
    const int tenThousands = number;

    cout << "The added number: ";
    cout << ones + tens + hundreds + thousands + tenThousands << endl;

    return 0;
}