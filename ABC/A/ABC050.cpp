#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int A, B;
    char op;

    cin >> A >> op >> B;

    if (op == '+')
    {
        cout << A + B << endl;
    }

    if (op == '-')
    {
        cout << A - B << endl;
    }

    return 0;
}