#include <iostream>
using namespace std;
int main()
{

    int a, c, d;
    cin >> a >> c >> d;
    for (int i = a; i >= c; i += d)
    {
        cout << i << " ";
    }
    return 0;
}