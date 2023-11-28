#include <iostream>
#include <string>
using namespace std;

int main(){
    string a, b;
    int len_a, len_b;
    cin >> a >> b;
    len_a = a.length();
    len_b = b.length();

    if (len_a > len_b)cout << a << endl;
    else cout << b << endl;
    return 0;
}
