#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int permainan;
    cin >> permainan;

    if (permainan < 0)
    {
        cout << "Negatif" << endl;
    }
    else if (permainan % 2 == 0)
    {
        cout << "Positif Genap" << endl;
    }
    else if (permainan % 2 == 1)
    {
        cout << "Positif Ganjil" << endl;
    }

    return 0;
}