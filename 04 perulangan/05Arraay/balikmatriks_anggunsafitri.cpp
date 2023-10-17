#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int matriks[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> matriks[i][j];
        }
    }
    for (int i = x - 1; i >= 0; i--)
    {
        for (int j = y - 1; j >= 0; j--)
        {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
