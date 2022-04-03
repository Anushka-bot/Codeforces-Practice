#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   getline(cin, s);
   set<char> s1;
   for(auto it:s){
      if(it != '{' && it != '}' && it != ' ' && it != ','){
         s1.insert(it);
      }
   }
   cout << s1.size();
}