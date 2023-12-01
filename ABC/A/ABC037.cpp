#include <iostream>
#include <string>
#include <map>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int min_price = a > b ? b : a;
    cout << c / min_price << endl;
    return 0;
}
