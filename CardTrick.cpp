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
        int n;
        cin >> n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int m=0;
        long long sum=0;
        cin >> m;
        int arr[m];
        for(int i=0;i<m;i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if(sum < n)
        {
            cout << v[sum] << endl;
        }
        else if(sum == n)
        {
            cout << v[0] << endl;
        }
        else{
            int x = sum%n;
            cout << v[x] << endl;
        }
   }
}