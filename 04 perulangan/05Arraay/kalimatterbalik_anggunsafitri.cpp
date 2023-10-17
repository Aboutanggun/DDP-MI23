#include <iostream>
using namespace std;

int main()
{
    string x;
    cout << "";
    getline(cin, x);
    for (int n = x.length() - 1; n >= 0; n--)
    {
        cout << x[n];
    }
    cout << endl;
    return 0;
}