#include <stdio.h>

int main()
{
    int t, n, m;
    scanf(" %d", &t);

    while(t--)
    {
        scanf(" %d %d", &n, &m);

        if((n == 1 || m == 1) || (n == 2 && m == 2))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
