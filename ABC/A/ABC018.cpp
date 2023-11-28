#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int arr[3];
    int w;
    cin >> arr[0] >> arr[1] >> arr[2];
    for(int i = 0; i< 3; i++){
        w = 3;
        for(int j = 0; j < 3; j ++){
            if(arr[i] > arr[j])w--;
        }
        cout << w << endl;
    }
    return 0;
}
