#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int n;
    cin >> n;
    if (n%3  == 0){
        cout <<"YES" << endl;
        exit(0);
    }else{
        while(n > 0){
            if(n % 10 == 3){
                cout << "YES" << endl;
                exit(0);
            }
            n /= 10;
        }
    }
    cout << "NO" << endl;
    return 0;
}
