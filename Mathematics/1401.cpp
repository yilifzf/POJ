#include <stdio.h>
#define _OJ_

int countZero(int n)
{
    int count = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        count += n/i;
    }
    return count;
}

int main(int argc, char const *argv[])
{
#ifndef _OJ_
    freopen("/Users/fzf_air/code/2017/POJ/text.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
#endif
    int N;
    scanf("%d", &N);
    int input[N];
    int result[N];
    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &input[i]);
    }
    for (int i = 0; i < N; ++i)
    {
        result[i] = countZero(input[i]);
    }
    for (int i = 0; i < N; ++i)
    {
        printf("%d\n", result[i]);
    }
    return 0;
}