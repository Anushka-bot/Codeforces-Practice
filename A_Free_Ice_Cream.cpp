#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    long long int total_icecreams = x, distress_child = 0;
    cin.ignore();
    while (n--)
    {
        string s,num;
        getline(cin, s);
        for(int i=2;i<s.size();i++){
            num += s[i];
        }
        if (s[0] == '+')
        {
            total_icecreams += stoi(num);
        }
        else if (s[0] == '-')
        {
            if (total_icecreams < stoi(num))
            {
                distress_child++;
            }
            else
            {
                total_icecreams -= stoi(num);
            }
        }
    }
    cout << total_icecreams << " " << distress_child << endl;
}