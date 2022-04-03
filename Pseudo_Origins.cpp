#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, origins = 0;
    cin >> n;
    vector<vector<int>> v_x_index(2000), v_y_index(2000);
    vector<int> ax, ay;
    cout << v_x_index[0].size();
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v_x_index[x + 1000].push_back(y); // ek coordinate x ke liye itne y hai
        v_y_index[y + 1000].push_back(x); // ek coordinate y ke liye itne x hai
    }
    for (int i = 0; i < 2000; i++)
    {
        if (v_x_index[i].size() >= 3)
        {
            ay = v_x_index[i]; // values of y
            sort(ay.begin(), ay.end());
            for (int j = 1; j < ay.size() - 1; j++)
            {
                if (v_y_index[ay[j] + 1000].size() >= 2)
                {
                    ax = v_y_index[ay[j] + 1000];
                    sort(ax.begin(), ax.end());
                    if (i - 1000 > ax[0] && i - 1000 < ax[ax.size() - 1])
                    {
                        origins++;
                    }
                }
            }
        }
    }
    cout << origins;
}