#include <iostream>
#include<cmath>
using namespace std;

int power(int, int);

int main()
{
    int base, power, result;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number(positive integer): ";
    cin >> power;

    result = pow(base, power);
    cout << base << "^" << power << " = " << result;

    return 0;
}

int power(int base, int power)
{
    if (power != 0)
        return (base*pow(base, power-1));
    else
        return 1;
}
