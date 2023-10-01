#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int nilai;
    cin >> nilai;

    if (nilai % 2 == 0)
    {
        cout << "Genap" << endl;
    }
    else
    {
        cout << "Ganjil" << endl;
    }
    return 0;
}
