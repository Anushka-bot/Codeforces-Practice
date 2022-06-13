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
        int n,m;
        cin >> n >> m;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        long long int sum=0;
        for(int i=0;i<n;i++){
            sum += a[i];
            if(sum == m){
                break;
            }
            else if(sum > m){
                sum = sum-a[i];
                break;
            }
        }
        long long int tsum=0;
        for(int i=0;i<n;i++){
            tsum += a[i];
        }
        if(m>=tsum){
            cout << 0 << endl;
        }
        else if(sum == m){
            cout << tsum-sum << endl;
        }
        else{
            cout << (tsum-sum)-(m-sum) << endl;
        }
   }
}