#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

void build(int u, int v, vector<int> adj[]){
    adj[u].push_back(v);
    return;
}

int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
        int n,k;
        cin >> n >> k;
        vector<int> route;
        int max_ele = INT_MIN;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            route.push_back(x);
            max_ele = max(max_ele,x);
        }
        vector<int> adj[max_ele+1];
        for(int i=0;i<n-1;i++){
            build(route[i],route[i+1],adj);
        }
        while(k--){
            int a, b, flag=0;
            cin >> a >> b;
            cout << "here" << endl;
                queue<int> q;
                q.push(a);
                while(!q.empty()){
                    int x = q.front();
                    q.pop();
                    for(auto it: adj[x]){
                        if(it==b){
                            flag=1;
                            break;
                        }
                        q.push(it);
                    }
                    if(flag){
                        break;
                    }
                }
            if(flag){
                cout << "YES" << endl;
                continue;
            }
            cout << "NO" << endl;
        }
   }
}