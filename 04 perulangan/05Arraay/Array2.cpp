#include <iostream>
using namespace std;

int main()
{
    int nilai[5];

    nilai[0] = 32;
    nilai[1] = 46;
    nilai[2] = 76;
    nilai[3] = 31;
    nilai[4] = 57;

    for (int i = 3; i < 5; i++)
    {
        cout << "nilai ke-" << i << "=" << nilai[i] << endl;
    }
    return 0;
}