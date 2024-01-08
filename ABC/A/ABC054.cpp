#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << "Draw" << endl;
    }
    else if (a == 1 || b == 1)
    {
        if (a == 1)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }
    else
    {
        if (a > b)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }
}
/*
int main() {
    int A, B;
    cin >> A >> B;
    if (A == 1) A += 13;
    if (B == 1) B += 13;
    if (A == B) cout << "Draw" << endl;
    else cout << (A > B ? "Alice" : "Bob") << endl;
    return 0;
}
*/