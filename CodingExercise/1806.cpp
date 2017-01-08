#include <stdio.h>
#include <stdlib.h>
#define _OJ_

int output(int n) 
{
	int size = (n << 1) + 1;
	int dis = 0;
	for (int slice = 1; slice <= size; ++slice)
	{
		int z = abs(n - slice + 1);
		printf("slice #%d:\n", slice);
		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				dis = abs(i - n) + abs(j - n) + z;
				if (dis > n)
				{
					printf(".");
				}
				else
				{
					printf("%d", dis);
				}
			}
			printf("\n");
		}
	}
	return 0;
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
    for (int i = 0; i < N; ++i)
    {
    	scanf("%d", &input[i]);
    }
    for (int i = 0; i < N; ++i)
    {
    	printf("Scenario #%d:\n", i + 1);
    	output(input[i]);
    	if (i != N - 1)
    	{
    		printf("\n");
    	}
    }
	return 0;
}