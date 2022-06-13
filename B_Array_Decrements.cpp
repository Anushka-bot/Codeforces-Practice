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
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int ind=-1;
        for(int i=0;i<n;i++){
            cin >> b[i];
            if(a[i] != 0 && b[i] != 0 && ind==-1 && a[i]>b[i]){
                ind =i;
            }
        }
        int diff = a[ind]-b[ind];
        int v=0;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                v=1;
                break;
            }
            else if(b[i]==0 && a[i]-b[i] > diff){
                v=1;
                break;
            }
            else{
                if(a[i]-b[i] != diff){
                    v=1;
                    break;
                }
            }
        }
        if(v==1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
   }
}