#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, order = 0;
    cin >> n;
    vector<int> v_n, v_front, v_back, v_final;
    while (n--)
    {
        int x;
        cin >> x;
        v_n.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cout << "front" << endl;
        for (int j = i; j < n; j++)
        {
            if (i != n - 1 && j != n - 1 && v_n[j] >= v_n[j + 1])
            {
                order++;
                cout << "order: " << order;
            }
            else
            {
                v_front.push_back(order);
                order = 0;
                break;
            }
        }
    }
    cout << "v_front:";
    for (auto it : v_front)
    {
        cout << it << " ";
    }
    cout << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << "back" << endl;
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
    cout << "v_back: ";
    for (auto it : v_back)
    {
        cout << it << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        v_final.push_back(v_front[i] + v_back[i]);
    }
    cout << "v_final: ";
    for (auto it : v_final)
    {
        cout << it << " ";
    }
    cout << endl;
    int ans = *max_element(v_final.begin(), v_final.end());
    cout << ans;
}