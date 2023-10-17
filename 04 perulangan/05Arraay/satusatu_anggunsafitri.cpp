#include <iostream>
using namespace std;

int main()
{
    string n;
    cout << "";
    getline(cin, n);
    for (char karakter : n)
    {
        cout << karakter << endl;
    }
    return 0;
}
