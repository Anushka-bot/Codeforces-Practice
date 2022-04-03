#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    cin >> str1;
    cin >> str2;
    int x1 = 0, x2 = 0;
    for (int i = 0; i < str1.size(); i++)
    {
        if ((str1[i] >= 'a' && str1[i] <= 'z') && (str2[i] >= 'A' && str2[i] <= 'Z'))
        {
            if ((int)str1[i] > ((int)str2[i] + 32))
            {
                x1++;
                printf("1");
                break;
            }
            else if ((int)str1[i] < ((int)str2[i] + 32))
            {
                x2++;
                printf("-1");
                break;
            }
        }
        else if ((str1[i] >= 'A' && str1[i] <= 'Z') && (str2[i] >= 'a' && str2[i] <= 'z'))
        {
            if ((int)str1[i] + 32 > (int)str2[i])
            {
                x1++;
                printf("1");
                break;
            }
            else if ((int)str1[i] + 32 < (int)str2[i])
            {
                x2++;
                printf("-1");
                break;
            }
        }
        else if (str1[i] >= 'a' && str1[i] <= 'z' && str2[i] >= 'a' && str2[i] <= 'z')
        {
            if ((int)str1[i] > (int)str2[i])
            {
                x1++;
                printf("1");
                break;
            }
            else if ((int)str1[i] < (int)str2[i])
            {
                x2++;
                printf("-1");
                break;
            }
        }
        else if (str1[i] >= 'A' && str1[i] <= 'Z' && str2[i] >= 'A' && str2[i] <= 'Z')
        {
            if ((int)str1[i] > (int)str2[i])
            {
                x1++;
                printf("1");
                break;
            }
            else if ((int)str1[i] < (int)str2[i])
            {
                x2++;
                printf("-1");
                break;
            }
        }
    }
    if (x1 == 0 && x2 == 0)
    {
        printf("0");
    }
}