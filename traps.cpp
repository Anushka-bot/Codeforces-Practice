#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long

int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
        int n,k;
        cin >> n >> k;
        vector<int> v(n),v2(n);
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            v[i]=x;
            // m2[x]++;
        }
        v2=v;
        sort(v.begin(),v.end());
        int k1=0,jumps=0,damage=0;
        for(int i=n-1;i>=0;i--)
        {
            k1++;
            if(k1<=k)
            {
                m[v[i]]++;
            }
            else{
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(m[v2[i]]>0)
            {
                // if(m[v2[i]]==1)
                // {
                    jumps++;
                // }
                // else if(m2[v2[i]])
            }
            else{
                damage += v2[i]+jumps;
            }
        }
        cout << damage << endl;
   }
}