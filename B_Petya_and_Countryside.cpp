#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, order = 0;
    cin >> n;
    vector<int> v_n, v_front, v_back, v_final;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v_n.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (i != n - 1 && j != n - 1 && v_n[j] >= v_n[j + 1])
            {
                order++;
            }
            else
            {
                v_front.push_back(order);
                order = 0;
                break;
            }
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            if (i != 0 && j != 0 && v_n[j] >= v_n[j - 1])
            {
                order++;
            }
            else
            {
                v_back.push_back(order);
                order = 0;
                break;
            }
        }
    }
    reverse(v_back.begin(),v_back.end());
    for (int i = 0; i < n; i++)
    {
        v_final.push_back(v_front[i] + v_back[i]);
    }
    int ans = *max_element(v_final.begin(), v_final.end());
    cout << ans+1;
}