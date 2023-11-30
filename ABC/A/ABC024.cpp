#include <iostream>
#include <string>
#include <map>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    int a,b,c,k;
    int s,t;
    cin >> a >> b >> c >> k;
    cin >> s >> t;
    int total_people_count = s + t;
    int discount = (total_people_count >= k) ? total_people_count * c : 0;
    int children_fee = a * s;
    int adult_fee = b * t;

    cout << children_fee + adult_fee - discount << endl;
    return 0;
}

