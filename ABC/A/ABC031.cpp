#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, d;
    cin >> a >> d;
    if ((a + 1) * d > a * (d + 1))
    {
        cout << (a + 1) * d;
    }
    else
    {
        cout << a * (d + 1);
    }
    cout << endl;
    return 0;
}
