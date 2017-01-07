#include <stdio.h>
#define _OJ_

int main(int argc, char const *argv[])
{
#ifndef _OJ_
    freopen("/Users/fzf_air/code/2017/POJ/text.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
#endif
    int N;
    int tag = 0;
    int sum = 0;
    int count = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; ++i)
    {
    	for (int j = tag; j <= N; ++j)
    	{
    		sum += j;
    		if (sum == N) 
    		{
    			count++;
    			tag = j;
    			// printf("%d\n", tag);
    			break;
    		}
    		if (sum > N)
    		{
    			tag = j;
    			break;
    		}
    		
    	}
    	sum = sum - i - tag;
    }
    printf("%d\n", count);
	return 0;
}