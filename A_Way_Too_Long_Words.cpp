#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   while(n--){
       string s;
       cin >> s;
       if(s.size() > 10){
           int count=s.size()-2;
           string final_string = s[0]+to_string(count)+s[s.size()-1];
           cout << final_string << endl;
       }
       else{
           cout << s << endl;
       }
   }
}