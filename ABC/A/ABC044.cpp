#include <iostream>
#include <string>
#include <map>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    int n,k,x,y;
    cin >> n >> k >> x >> y;
    int ans = 0;
    for(int i = 1; i < n +1 ; i++){
        if (i <= k) ans += x;
        else ans += y;
    }
    cout << ans << endl;
    return 0;
}
