#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

int main()
{
   int n,q;
   cin >> n >> q;
   vector<int> p(n);
   for(int i=0;i<n;i++){
        cin >> p[i];
   }
   sort(p.begin(),p.end());
   long long int sumr[n],sumf[n];
   sumr[n-1]=p[n-1];
   sumf[0]=p[0];
   long long int tsum=0;
   tsum += p[n-1];
   for(int i=n-2;i>=0;i--){
    sumr[i]=sumr[i+1]+p[i];
    tsum += p[i];
    }
   for(int i=1;i<n;i++){
    sumf[i] = p[i] + sumf[i-1];
    }
   while(q--){
     int x,y;
     cin >> x >> y;
     long long int ans=0;
     if(x==y){
        cout << sumr[n-x] << endl;
     }
     else if(x<n){
        ans = tsum - (sumf[n-x-1]+sumr[n-x+y]);
        cout << ans << endl;
     }
     else{
        ans = sumf[y-1];
        cout << ans << endl;
     }
   }
}