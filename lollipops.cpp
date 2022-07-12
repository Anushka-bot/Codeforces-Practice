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
        string s;
        cin >> s;
        int days=0;
        int n = s.size();
        char l1='0',l2='0',l3='0';
        for(int i=0;i<n;i++){
            if(l1=='0'){
                l1=s[i];
            }
            else if(s[i] != l1 && l2 == '0'){
                l2 = s[i];
            }
            else if(s[i] != l1 && s[i] != l2 && l3 == '0'){
                l3 = s[i];
            }
            else if(s[i]!=l1 && s[i]!=l2 && s[i]!=l3){
                days++;
                l1='0';
                l2='0';
                l3='0';
                i--;
            }
        }
        cout << ++days << endl;
   }
}