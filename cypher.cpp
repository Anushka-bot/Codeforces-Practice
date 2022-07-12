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
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        for(int i=0;i<n;i++){
            int moves;
            string s;
            cin >> moves >> s;
            for(int j=0;j<moves;j++){
                if(s[j]=='U'){
                    if(v[i]==0){
                        v[i]=9;
                    }
                    else{
                        v[i] -= 1;
                    }
                }
                else{
                    if(v[i]==9){
                        v[i]=0;
                    }
                    else{
                        v[i] += 1;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            cout << v[i] << " ";
        }
        cout << endl;
   }
}