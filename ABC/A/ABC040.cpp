#include <iostream>
#include <string>
#include <map>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int answer = min(x -1 , n - x);
    cout << answer << endl;
    return 0;
}

