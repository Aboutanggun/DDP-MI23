#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    char bilangan;
    cin >> bilangan;

    if (bilangan == 'A')
    {
        cout << "Nilai kamu 100" << endl;
    }
    else if (bilangan == 'B')
    {
        cout << "Nilai kamu 76 - 99" << endl;
    }
    else if (bilangan == 'C')
    {
        cout << "Nilai kamu dibawah 76 :(" << endl;
    }
    else
    {
        cout << "Nilai Invalid" << endl;
    }

    return 0;
}