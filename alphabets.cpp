#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int n = str.size();
        int v = 0, x = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'a')
            {
                x = i;
            }
            if ((int)str[i] > 96 + n)
            {
                printf("NO\n");
                v = 1;
                break;
            }
            for(int j=0;j<n;j++)
            {
                if(str[i] == str[j] && j>i && v != 1)
                {
                    printf("NO\n");
                    v = 1;
                    break;
                }
            }
        }
        for (int u = 0; u < x; u++)
        {
            if ((int)str[u + 1] > (int)str[u])
            {
                if(v != 1)
                {
                    cout << "NO" << endl;
                }
                v = 1;
                break;
            }
        }
        for (int u = n - 1; u > x; u--)
        {
            if ((int)str[u - 1] > (int)str[u])
            {
                if(v != 1)
                {
                    cout << "NO" << endl;
                }
                v = 1;
            }
        }
        if (v != 1)
        {
            printf("YES\n");
        }
    }
    return 0;
}