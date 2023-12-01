#include <iostream>
#include <string>
#include <map>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if(b % a != 0) cout << b / a + 1 << endl;
    else cout << b / a;
    return 0;
}
