// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//    int t = 0;
//    cin >> t;
//    while(t--)
//    {
//       int r;
//       cin >> r;
//       if(r <= 1399){
//           cout << "Division " << 4 << endl;
//       }
//       else if(r > 1399 && r <= 1599){
//           cout << "Division " << 3 << endl;
//       }
//       else if(r > 1599 && r <= 1899){
//           cout << "Division " << 2 << endl;
//       }
//       else{
//           cout << "Division " << 1 << endl;
//       }
//    }
// }


#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
        int n,m;
        cin >> n;
        vector<int> a,b;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        cin >> m;
        for(int i=0;i<m;i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a[0] >=  b[0])
        {
            cout << "Alice" << end;
        }
        else{
            cout << "Bob" << endl;
        }
        if(b[0] >=  a[0])
        {
            cout << "Bob" << end;
        }
        else{
            cout << "Alice" << endl;
        }

   }
}