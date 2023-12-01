#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include<algorithm>

using namespace std;

void solve1();
void solve2();
void solve3();
int main()
{
    solve1();
    // solve2();
    // solve3();
    return 0;
}

void solve1(){
    string c;
    cin >> c;
    for(int i = 0; i < c.length() - 1 ; i ++){
        if(c.substr(i,1) != c.substr(i+1, 1)){
            cout << "DIFFERENT" << endl;
            exit(0);
        }
    }
    cout << "SAME" << endl;
}

void solve2(){
    string str;
    cin >> str;
    set<char> set_str;
    for(char c : str){
        set_str.insert(c);
    }
    if(set_str.size() != 1) cout << "DIFFERENT";
    else cout << "SAME";
    cout << endl;
}

void solve3(){
    int n ;
    cin >> n;
    if(n % 1111){
        cout << "DIFFERENT" << endl;
    }else{
        cout << "SAME" << endl;
    }
}