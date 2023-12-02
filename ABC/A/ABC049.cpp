#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    set<char> vowels = {'a', 'i', 'u', 'e', 'o'};
    char c;
    cin >> c;
    if (vowels.find(c) != vowels.end())
    {
        cout << "vowel" << endl;
    }
    else
    {
        cout << "consonant" << endl;
    }
    return 0;
}
