#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
        int n,m;boi
        cin >> n;
        vector<int> a,b;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        cin >> m;
        for(int i=0;i<m;i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }
        sort(a.begin(),a.end(), greater<int>());
        sort(b.begin(),b.end(), greater<int>());
        if(a[0] >=  b[0])
        {
            cout << "Alice" << endl;
        }
        else{
            cout << "Bob" << endl;
        }
        if(b[0] >=  a[0])
        {
            cout << "Bob" << endl;
        }
        else{
            cout << "Alice" << endl;
        }

   }
}