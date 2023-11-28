#include <iostream>
#include <string>
using namespace std;

int main(){
    int e, s;
    int score = 0;
    for(int i = 0; i<3; i++){
        cin >> e >> s ;
        score += e*s/10;
    }
    cout << score << endl;
    return 0;
}
