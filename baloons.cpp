#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<char,int> mp;
        int count=0;
        for(int i=0;i<n;i++){
            if(mp.find(s[i])==mp.end()){
                count += 2;
                mp[s[i]]++;
            }
            else{
                count++;
            }
        }
        cout << count << endl;
   }
}