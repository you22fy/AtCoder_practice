#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n == 12){
        n = 1;
    }else{
        n += 1;
    }
    cout <<  n << endl;
    return 0;
}
