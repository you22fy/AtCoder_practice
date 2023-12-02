#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    int kids0 = 0, kids1 = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                if (i == 0)
                    kids0 += arr[0];
                else
                    kids1 += arr[0];

                if (j == 0)
                    kids0 += arr[1];
                else
                    kids1 += arr[1];

                if (k == 0)
                    kids0 += arr[2];
                else
                    kids1 += arr[2];
                if (kids0 == kids1)
                {
                    cout << "Yes" << endl;
                    exit(0);
                }
                else
                {
                    kids0 = 0;
                    kids1 = 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
