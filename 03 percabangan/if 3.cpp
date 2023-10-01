#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int a;

    cin >> a;

    if (a >= 0 && a <= 5)
    {
        cout << "Satuan" << endl;
    }
    else if (a >= 10 && a <= 99)
    {
        cout << "Puluhan" << endl;
    }
    else if (a >= 100 && a <= 999)
    {
        cout << "Ratusan" << endl;
    }
    else
    {
        cout << "Tidak Tahu" << endl;
    }
    return 0;
}