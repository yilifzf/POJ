#include <stdio.h>
#define _OJ_

int main(int argc, char const *argv[])
{
#ifndef _OJ_
    freopen("/Users/fzf_air/code/2017/POJ/text.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
#endif
    int N;
    int a, tmp, h, minLeft, maxRight;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &a);
        tmp = a;
        h = 0;
        while (tmp % 2 == 0)
        {
            h++;
            tmp = tmp >> 1;
        }
        minLeft = a - ((1 << h) - 1);
        maxRight = a + ((1 << h) - 1);
        printf("%d %d\n", minLeft, maxRight);
    }
	return 0;
}