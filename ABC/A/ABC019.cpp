#include <iostream>
#include <string>
#include <map>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    int arr[3];
    for(int i = 0 ; i < 3; i++){
        cin >> arr[i];
    }
    sort(arr, arr + 3);
    cout << arr[1] << endl;

    return 0;
}
