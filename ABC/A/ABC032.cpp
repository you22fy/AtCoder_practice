#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    int idx = n;
    while (idx % a != 0 || idx % b != 0) idx ++;
    cout << idx << endl;
    return 0;
}
