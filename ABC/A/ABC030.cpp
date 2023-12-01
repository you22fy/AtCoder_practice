#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((double)b / a ==  (double)d / c)
    {
        cout << "DRAW";
    }
    else if( (double) b/a > (double)d/c){
        cout << "TAKAHASHI";
    }
    else{
        cout << "AOKI";
    }
    cout << endl;
    return 0;
}
