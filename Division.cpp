#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
      int r;
      cin >> r;
      if(r <= 1399){
          cout << "Division " << 4 << endl;
      }
      else if(r > 1399 && r <= 1599){
          cout << "Division " << 3 << endl;
      }
      else if(r > 1599 && r <= 1899){
          cout << "Division " << 2 << endl;
      }
      else{
          cout << "Division " << 1 << endl;
      }
   }
}