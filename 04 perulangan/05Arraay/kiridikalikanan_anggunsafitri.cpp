#include <iostream>
using namespace std;

int main()
{
    int A, n;
    cin >> A >> n;
    for (int i = 1; i <= A; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}
