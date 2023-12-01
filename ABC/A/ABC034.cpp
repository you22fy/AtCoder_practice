#include <iostream>
#include <string>
#include <map>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    if (x > y) cout << "Worse" << endl;
    else cout << "Better" << endl;
    return 0;
}