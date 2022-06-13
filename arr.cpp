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
        int n;
        cin >> n;
        string s,t;
        cin >> s;
        cin >> t;
        if(s==t){
            cout << "YES" << endl;
            continue;
        }
        if(n==1 && s!=t){
            cout << "NO" << endl;
            continue;
        }
        else if(n==1 && s==t){
            cout << "YES" << endl;
            continue;
        }
        int a1=0,a2=0,b1=0,b2=0,c1=0,c2=0;
        int Pab=0,Pbc=0,Pba=0,Pcb=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                a1++;
            }
            else if(s[i]=='b'){
                b1++;
            }
            else{
                c1++;
            }
            if(i!=n-1 && s[i]=='a' && s[i+1]=='b'){
                Pab++;
            }
            else if(i!=n-1 && s[i]=='b' && s[i+1]=='c'){
                Pbc++;
            }
        }
        for(int i=0;i<n;i++){
            if(t[i]=='a'){
                a2++;
            }
            else if(t[i]=='b'){
                b2++;
            }
            else{
                c2++;
            }
            if(i!=n-1 && t[i]=='b' && t[i+1]=='a'){
                Pba++;
            }
            else if(i!=n-1 && t[i]=='c' && t[i+1]=='b'){
                Pcb++;
            }
        }
        cout << "PAB: " << Pab << "PBC: " << Pbc << "PBA: " << Pba << "PCB: " << Pcb << endl;
        if(a1==a1 && b1==b2 && c1==c2)
        {
            if(Pab == Pba && Pbc == Pcb)
            {
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
   }
}