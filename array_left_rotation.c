#include <stdio.h>

int main()
{
    int n, d;
    scanf("%d %d", &n, &d);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    
    for(int i=0; i<n; i++)
        printf("%d%c", a[(i+d) % n], i < n-1 ? ' ' : '\n');

    return 0;
}
