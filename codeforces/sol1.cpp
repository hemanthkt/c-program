#include <iostream>
#include <string.h>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    int t;

    cin >> t;
    vector<int> n(t);
    vector<string> s(t);

    for (int i = 0; i < t; i++)
    {
        cin >> n[i] >> s[i];
    }

    int c = 1;
    int z = 0;

    int j = 0;
    for (int i = 0; i < t; i++)
    {
        int ans = 0;
        for (int j = 0; j < n[i] - 3; j++)
        {
            if (s[i][j] == '2' && s[i][j + 1] == '0' && s[i][j + 2] == '2' && s[i][j + 3] == '6')
            {
                ans = 0;
                break;
            }

            if (s[i][j] == '2' && s[i][j + 1] == '0' && s[i][j + 2] == '2' && s[i][j + 3] == '5')
            {
                ans = 1;
                break;
            }
        }

        cout << ans << "\n";
    }
}