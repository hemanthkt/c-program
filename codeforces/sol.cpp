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

    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        int min1 = min(a, b);
        int max1 = max(a, b);
        int l = 0;

        int n = 1;
        int iter = 0;
        while (true)
        {
            if (iter % 2 != 0)
            {
                min1 = min1 - n;
                if (min1 >= 0)
                {
                    l++;
                }
                iter++;
            }
            if (iter % 2 == 0)
            {
                max1 = max1 - n;
                if (max1 >= 0)
                {
                    l++;
                }
                iter++;
            }

            if (max1 < 0 || min1 < 0)
            {
                break;
            }

            n = n * 2;
        }

        cout << l << "\n";
    }
}