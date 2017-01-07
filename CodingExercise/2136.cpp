#include <stdio.h>
#define _OJ_

int main(int argc, char const *argv[])
{
#ifndef _OJ_
    freopen("/Users/fzf_air/code/2017/POJ/text.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
#endif
    int count[26];
    int max = 0, base;
    for (int i = 0; i < 26; ++i)
    {
    	count[i] = 0;
    }
    for (int i = 0; i < 4; ++i)
    {
    	char c;
    	while ((c = getchar()) != '\n') {
    		int rank = c - 'A';
    		if (rank < 26 && rank >= 0)
    		{
    			count[rank]++;
    			if (count[rank] > max) max = count[rank];
    		}
    	}
    }
	base = max;
	// printf("%d\n", max);
    for (int i = 0; i < max; ++i)
    {
    	for (int j = 0; j < 26; ++j)
    	{
    		if (count[j] < base)
    		{
    			printf(" ");
    		}
    		else 
    		{
    			printf("*");
    		}
    		if (j < 25) 
    		{
    			printf(" ");
    		}
    	}
    	base--;
    	printf("\n");
    }
    for (int i = 0; i < 26; ++i)
    {
    	printf("%c", 'A' + i);
    	if (i < 25)
    	{
    		printf(" ");
    	}
    }
    printf("\n");
    
	return 0;
}