#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
        int n;
        cin >> n;
        vector<int> s(n);
        vector<int> f(n);
        vector<int> d(n);
        for(int i=0;i<n;i++)
        {
            cin >> s[i];
        }
        for(int i=0;i<n;i++)
        {
            cin >> f[i];
        }
        for(int i=0;i<n;i++)
        {
            if(i == 0){
                d[i] = f[i]-s[i];
            }
            else{
                if(s[i] > f[i-1]){
                    d[i] = f[i]-s[i];
                }
                else{
                    d[i] = f[i]-f[i-1];
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout << d[i] << " ";
        }
        cout << endl;
   }
}