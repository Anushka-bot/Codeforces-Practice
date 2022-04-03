#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin >> name;
    int count = 0, r = 0;
    int size = name.size();
    char arr[size];
    for (int i = 0; i < size; i++)
    {
        count++;
        for (int k = 0; k < r; k++)
        {
            if (name[i] == arr[k])
            {
                count--;
                continue;
            }
        }
        for (int j = 0; j < size; j++)
        {
            if (name[i] == name[j] && j != i && i != size - 1)
            {
                arr[r] = name[i];
                r++;
            }
        }
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }