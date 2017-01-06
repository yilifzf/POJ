#include <stdio.h>
#define _OJ_

int main(int argc, char const *argv[])
{
#ifndef _OJ_
    freopen("/Users/fzf_air/code/xcodetest/xcodetest/intext.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
#endif
    float sum = 0;
    float num;
    for (int i = 0; i < 12; ++i)
    {
    	scanf("%f", &num);
    	sum += num;
    }

    printf("$%.2f\n", sum/12);
	return 0;
}