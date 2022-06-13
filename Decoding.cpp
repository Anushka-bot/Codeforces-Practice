#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

int main()
{
   int n;
   cin >> n;
   string s;
   cin >> s;
   vector<char> letters(n);
   cout << letters[0] << endl;
   int left=0,right=0;
//    cout << (n>>1) << endl;
   if(n&1){
        letters[n>>1] = s[0];
        left = (n>>1)-1;
        right = (n>>1)+1;
   }
   else{
        letters[(n>>1)-1] = s[0];
        left = (n>>1)-2;
        right = n>>1;
   }
   for(int i=1;i<n;i++){
        int size = n-i;
        // cout << "size: " << size << endl;
        if(size&1){
            letters[right] = s[i];
            right++;
            // cout << "right: " << right << endl;
            // cout << "letters[i]: " << letters[i] << endl;
        }
        else{
            letters[left] = s[i];
            left--;
            // cout << "left: " << left << endl;
            // cout << "letters[i]: " << letters[i] << endl;
        }
    }
    string output;
    for(int i=0;i<n;i++){
        // cout << "letters[i]: " << letters[i] << endl;
        output += letters[i];
    }
    cout << output;
}