#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        string s;
        char c;
        cin >> s;
        cin >> c;
        vector<int> index;
        int count=0,v=0;
        if (s.size() == 1)
        {
            if (s[0] == c)
            {
                cout << "YES" << endl;
                continue;
            }
            else
            {
                cout << "NO" << endl;
                continue;
            }
        }
        for (int i=0;i<s.size();i++)
        {
            if(s[i] == c){
                count++;
                index.push_back(i);
            }
        }
        if(count == 1 && index[0]%2 == 0){
            cout << "YES" << endl;
            continue;
        }
        else if(count > 1){
            for(auto it: index){
                if(it % 2 == 0){
                    cout << "YES" << endl;
                    v=1;
                    break;
                }
            }
        }
        if(v == 1){
            continue;
        }
        else{
            cout << "NO" << endl;
        }
    }
}