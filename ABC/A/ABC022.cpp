#include <iostream>
#include <string>
#include <map>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    int n, s, t, w;
    cin >> n >> s >> t >> w;
    int arr[n];
    for(int i = 0; i < n-1; i++){
        cin >> arr[i];
    }
    int ans = (s <= w && w <= t) ? 1 : 0;
    for(int i = 0; i < n-1; i++){
        w += arr[i];
        if(s <= w && w <= t){
            ans ++;
        }
    }
    cout << ans << endl;
    return 0;
}

