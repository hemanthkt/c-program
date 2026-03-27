#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t; // number of test cases

    while (t--)
    {
        int n;
        string s;

        cin >> n; // length
        cin >> s; // binary string

        int fast = 2;
        int slow = 0;
        int ones = count(s.begin(), s.end(), '1');
        int maxVal = ones;
        int minVal = ones;

        while (fast < n)
        {
            if (s[fast] == '1' && s[slow] == '1')
            {
                if (s[fast - 1] == '0')
                {
                    maxVal++;
                }
                else
                {
                    minVal--;
                }
            }
            fast++;
            slow++;
        }
        cout << minVal << " " << maxVal << endl;
    }

    return 0;
}