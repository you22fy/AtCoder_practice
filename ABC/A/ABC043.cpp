#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i < n + 1; i++)
    {
        ans += i;
    }
    cout << ans << endl;
    return 0;
}
