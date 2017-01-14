#include <stdio.h>
#define _OJ_
typedef long long myInt;

int main(int argc, char const *argv[])
{
#ifndef _OJ_
    freopen("/Users/fzf_air/code/2017/POJ/text.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
#endif
    myInt n, m;
    myInt floor;
    myInt ref, i;
    myInt a, b, diff;
    myInt k, tmp;
    while (1) {
		scanf("%lld %lld", &n, &m);
		if (n == -1 && m == -1)
		{
			break;
		}
		ref = 0; i = 0;
		while (ref <= m) {
			diff = m - ref;
			i++;
			ref = i*(i-1)/2;
		}
		floor = i - 1;
		a = n - floor - 1;
		b = n - floor + diff;
		for (myInt j = 0; j < a; ++j)
		{
			printf("%lld ", j + 1);
		}
		printf("%lld ", b);
		k = floor;
		tmp = n;
		while (k)
		{
			if (tmp == b)
			{
				tmp--;
				continue;
			}
			printf("%lld", tmp--);
			if (k-- != 1) {
				printf(" ");
			}
			else
			{
				printf("\n");
			}
		}

	}
	return 0;
}