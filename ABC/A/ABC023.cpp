#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int x;
    int r;
    cin >> x;
    int sum = 0;
    while (x > 0)
    {
        r = x % 10;
        x /= 10;
        sum += r;
    }
    cout << sum << endl;
    return 0;
}
