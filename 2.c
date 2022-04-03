#include <stdio.h>
int main()
{
    int t = 0, i = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int n = 0, j = 0, u = 0;
        scanf("%d", &n);
        for (j = 1; j <= n; j++)
        {
            int p = 0, k = 0;
            int s[10];
            for (k = 0; k < 10; k++)
            {
                p = j % 10;
                if (j > 9)
                {
                    s[k] = p;
                }
                else
                {
                    s[k] = j;
                    break;
                }
                j = j / 10;
            }
            int v = 0, w = 0;
            for (v = 0; v <= k; v++)
            {
                if (s[0] == s[v])
                {
                    w++;
                }
            }
            if (w == (k + 1))
            {
                u++;
            }
        }
        printf("%d\n", u);
    }
    return 0;
}
