#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string like_str;
    int n;
    cin >> like_str >> n;
    string nickname;
    for (int i = 0; i < like_str.length(); i++)
    {
        for (int j = 0; j < like_str.length(); j++)
        {
            if (5 * i + j + 1 == n)
            {
                nickname = like_str.substr(i, 1) + like_str.substr(j, 1);
                cout << nickname <<endl;
            }
        }
    }
    return 0;
}
