#include <stdio.h>
#define _OJ_

int reverse(int n)
{
	int i = n;
	int result = 0;
	while(i != 0)
	{
		result = result * 10 + i % 10;
		i /= 10;
	}
	return result;
}

int main(int argc, char const *argv[])
{
#ifndef _OJ_
    freopen("/Users/fzf_air/code/2017/POJ/text.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
#endif
    int N;
    int a, b;
    scanf("%d", &N);
    int output[N];
    for (int i = 0; i < N; ++i)
    {
    	scanf("%d %d", &a, &b);
    	output[i] = reverse(reverse(a) + reverse(b));
    }
    for (int i = 0; i < N; ++i)
    {
    	printf("%d\n", output[i]);
    }
	return 0;
}