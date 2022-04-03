#include <stdio.h>
int main()
{
    int t = 0;
    scanf("%d", &t);
    int k = 0;
    for (k = 0; k < t; k++)
    {
        int n = 0, pairs = 0, i = 0, j = 0, l = 0;
        scanf("%d", &n);
        int arr[n];
        for (l = 0; l < n; l++)
        {
            scanf("%d", &arr[l]);
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                    if ((arr[j] - arr[i]) == (j - i) && j > i)
                    {
                        pairs++;
                    }
            }
        }
        printf("%d\n",pairs);
    }
    return 0;
}