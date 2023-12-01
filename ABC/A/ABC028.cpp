#include <iostream>
#include <string>
#include <map>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    int n ;
    cin >> n;
    if(n == 100) cout << "Perfect";
    else if(90 <= n && n <=99) cout << "Great";
    else if(60 <= n && n <= 89) cout << "Good";
    else cout << "Bad";

    cout << endl;
    return 0;
}

