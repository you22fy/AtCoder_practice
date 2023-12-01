#include <iostream>
#include <string>
#include <map>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int mx =0;
    for(int i = 1; i < a; i++){
        for(int j = i; j < a; j ++){
            if(i + j == a){
                if(i*j > mx){
                    mx = i*j;
                }
            }
        }
    }
    cout << mx << endl;
    return 0;
}

