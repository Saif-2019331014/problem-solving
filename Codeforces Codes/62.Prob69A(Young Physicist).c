#include <stdio.h>

int main()
{
    int n, x, y, z, sx=0, sy=0, sz=0;
    scanf("%d", &n);

    while(n--)
    {
        scanf("%d %d %d", &x, &y, &z);

        sx += x;
        sy += y;
        sz += z;
    }

    if(sx == 0 && sy == 0 && sz == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
