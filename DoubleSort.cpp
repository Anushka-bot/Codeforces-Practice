#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define ll long long

int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
        int n;
        cin >> n;
        int a[n],b[n];
        fo(i,n){
            cin >> a[i];
        }
        fo(i,n){
            cin >> b[i];
        }
        vector<pair<int,int>> v_p;
        for(int i=0;i<n;i++)
        {
            int ele = a[i];
            int x=0;
            for(int j=i+1;j<n;j++)
            {
                if(a[j] < ele)
                {
                    ele = a[j];
                    x=j;
                }
            }
            int temp = a[i];
            a[i] = a[x];
            a[x] = temp;
            int temp1 = b[i];
            b[i] = b[x];
            b[x] = temp;
            v_p.push_back({i,x});
        }
        fo(i,n){
            cout << a[i] << " ";
        }
        cout << endl;
        int no=0;
        fo(i,n-1){
            if(b[i] > b[i+1])
            {
                no=1;
                break;
            }
        }
        if(no == 0)
        {
            for(auto it = v_p.begin(); it != v_p.end();it++)
            {
                cout << it->first << " " << it->second << endl;
            }
        }
        else{
            vector<pair<int,int>> v_p1;
            for(int i=0;i<n;i++)
        {
            int ele = b[i];
            int x=0;
            for(int j=i+1;j<n;j++)
            {
                if(b[j] < ele)
                {
                    ele = b[j];
                    x=j;
                }
            }
            int temp = b[i];
            b[i] = b[x];
            b[x] = temp;
            int temp1 = a[i];
            a[i] = a[x];
            a[x] = temp;
            v_p1.push_back({i,x});
        }
        int no1=0;
         fo(i,n-1){
            if(a[i] > a[i+1])
            {
                no1=1;
                break;
            }
        }
        if(no1 == 0)
        {
            for(auto it = v_p1.begin(); it != v_p1.end();it++)
            {
                cout << it->first << " " << it->second << endl;
            }
        }
        else{
            cout << -1 << endl;
        }
        }
   }
}