#include <stdio.h>
#include <math.h>
#define _OJ_

bool isprime(int n)
{
    int flag = 1;
    for (int i = 2; i <= sqrt(n); ++i)  
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main(int argc, char const *argv[])
{
#ifndef _OJ_
    freopen("/Users/fzf_air/code/2017/POJ/text.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
#endif
    int a;
    while(1)
    {
    	scanf("%d", &a);
        if (a == 0)
        {
            break;
        }
        for (int i = 3; i <= a/2; i = i + 2)
        {
            if (isprime(i))
            {
                if (isprime(a - i))
                {
                    printf("%d = %d + %d\n", a, i, a - i);
                    break;
                }
            }
        }
    }
	return 0;
}