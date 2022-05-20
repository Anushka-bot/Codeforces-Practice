#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, t = 0, k = 0, d = 0;
    cin >> n >> t >> k >> d;
    int check = n % k;
    // int time_not_build = 0;
    // if (check == 0)
    // {
    //     time_not_build = (n / k) * t;
    // }
    // else
    // {
    //     time_not_build = (n / k) * t + t;
    // }
    // int cakes_left = 0, time_elapsed = 0;
    // if (t >= d)
    // {
    //     time_elapsed = t;
    //     cakes_left = n - k;
    // }
    // else if (d > t && d % t == 0)
    // {
    //     time_elapsed = (d / t) * t;
    //     cakes_left = n - ((d / t) * k);
    // }
    // else if (d > t && d % t != 0)
    // {
    //     time_elapsed = (d / t) * t + t;
    //     cakes_left = n - ((d / t) * k + k);
    // }
    // int time_build = 0, v = 0;
    // if (cakes_left <= 2 * k)
    // {
    //     time_build = time_elapsed + t;
    // }
    // else
    // {
    //     time_build = (cakes_left / (2 * k)) * t + t + time_elapsed;
    // }
    // if (cakes_left == 0 && time_elapsed < time_not_build)
    // {
    //     cout << "YES";
    // }
    // else if (time_build < time_not_build)
    // {
    //     cout << "YES";
    // }
    // else
    // {
    //     cout << "NO";
    // }
    int cakes_left = 0;
    if(k > n)
    {
        cout << "NO" << endl; 
    }
    else if(t>d)
    {
        cout << "YES" << endl;
    }
    else if(t == d)
    {
        cakes_left = n - k;
        if(n-k == k)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    else if(d > t)
    {
        if((check==0 && d >= check*t) || (check!=0 && d >= (check*t + t)))
        {
            cout << "NO" << endl;
        }
        else 
        {
            cout << "YES" << endl;
        }
    }
    if(d>t)
    {
        int x1 = d%t;
        int te1 = t;
        int check3 = d/t;
        int te2 = (check3+1)*t;
        int x2 =  te2-d;
        if(x1<=x2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}