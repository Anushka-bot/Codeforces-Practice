#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v, front(n), back(n), maxpro(n);
        while (n--)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int product_till_now = v[i], max_product = v[i];
            front[i] = i;
            back[i] = i;
            for (int j = i + 1; j < n; j++)
            {
                product_till_now *= v[j];
                if (product_till_now > max_product)
                {
                    max_product = product_till_now;
                    back[i] = j;
                }
            }
            maxpro[i] = max_product;
        }
        int x = 0;
        for (int i = 1; i < n; i++)
        {
            if (maxpro[i] > maxpro[x])
            {
                x = i;
            }
        }
        cout << front[x] << " " << (n - 1) - back[x] << endl;
    }
}