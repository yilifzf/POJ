#include <stdio.h>
#include <math.h>
#define _OJ_

int main(int argc, char const *argv[])
{
#ifndef _OJ_
    freopen("/Users/fzf_air/code/2017/POJ/text.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
#endif
    int N, n;
    double R;
    double pi = acos(-1.0);
    scanf("%d", &N);
    double result;
    for (int i = 0; i < N; ++i)
    {
    	scanf("%lf %d", &R, &n);
    	if (n == 2)
    	{
    		result = R/2;
    	}
    	else
    	{
			result = R*sin(pi/n)/(1 + sin(pi/n));
		}
		printf("Scenario #%d:\n", i + 1);
    	printf("%.3lf\n\n", result);
    }
	return 0;
}