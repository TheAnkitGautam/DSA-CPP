#include <stdio.h>
int reversDigits(int num)
{
    int rev_num = 0;
    while (num)
    {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
int main()
{
    int n, ans;
    scanf("%d", &n);
    if (n > 0)
        ans = reversDigits(n);
    else
    {
        int temp = n * (-1);
        ans = reversDigits(temp);
        ans = ans * (-1);
    }
    printf("%d", ans);
    return 0;
}