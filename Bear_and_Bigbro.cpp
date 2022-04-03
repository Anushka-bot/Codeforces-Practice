#include <bits/stdc++.h>
using namespace std;
int main()
{
    int limak = 0, bob = 0, yr = 0;
    cin >> limak >> bob;
    for (yr = 0;; limak = 3 * limak, bob = 2 * bob)
    {
        if (limak <= bob)
        {
            yr++;
        }
        else
        {
            break;
        }
    }
    cout << yr;
    return 0;
}