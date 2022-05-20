#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
        int n,m;
        cin >> n >> m;
        int a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin >> a[i][j];
            }
        }
        int start=0,end=0,row=0;
        int started=0,ended=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m-1;j++)
            {
                if(a[i][j] > a[i][j+1])
                {
                    // cout << "i: " << i << "j: " << j << endl;
                    started =1;
                    start = j;
                    row = i;
                    break;
                }
            }
            if(started == 1){
                break;
            }
        }
        for(int j=start+1;j<m;j++)
        {
            if(a[row][start] < a[row][j])
            {
                end = j-1;
                ended=1;
                break;
            }
        }
        if(ended == 0 && started == 1){
            end = m-1;
        }
        int v=0;
        for(int i=0;i<n;i++)
        {
            for(int j=start; j<end;j++)
            {
                if(a[i][end]>a[i][j])
                {
                    v=1;
                    break;
                }
            }
        }
        if(v==1){
            cout << -1 << endl;
        }
        else{
            cout << start+1 << " " << end+1 << endl;
        }
   }
}