#include <stdio.h>
#define _OJ_

int main(int argc, char const *argv[])
{
#ifndef _OJ_
    freopen("/Users/fzf_air/code/xcodetest/xcodetest/intext.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
#endif
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) {
    	printf("%d\n", a+b);
    }
    
	return 0;
}
