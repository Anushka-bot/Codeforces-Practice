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
        vector<int> v(n+1);
        for(int i=1;i<=n;i++){
            cin >> v[i];
        }
        long long int count=0;
        map<int,int> m1,m2;
        for(int i=1;i<=n;i++){
            if(v[i]<i){
                m1[i] = v[i];
                m2[v[i]]=i;
            }
        }
        int s = m1.size();
        for(int i=0;i<s;i++){
            int ele = m1[i];
            for(int j=0;j<s;j++){

            }
        }
        cout << count << endl;
   }
}