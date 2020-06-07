#include <stdio.h>
int binary(int n, int a[10])
{
    int i = 31;
    while (n != 0)
    {
        a[i] = n % 2;
        n = n / 2;
        i--;
    }
}

int main()
{
    int n, a[32] = {0}, result;

    printf("Enter The Number:\n");
    scanf("%d", &n);
    binary(n, a);
    for (int i = 31; i >= 0; i--)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}