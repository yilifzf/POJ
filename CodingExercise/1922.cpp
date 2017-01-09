#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <iostream>
#define _OJ_

using namespace std;

int main(int argc, char const *argv[])
{
#ifndef _OJ_
    freopen("/Users/fzf_air/code/2017/POJ/text.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
#endif
    int n;
    int Ti, Vi;
    int arrivalTime;
    int min = INT_MAX;
    while (true)
    {
    	scanf("%d", &n);
    	if (n == 0)
    	{
    		break;
    	}
    	min = INT_MAX;
    	for (int i = 0; i < n; ++i)
    	{
    		scanf("%d %d", &Vi, &Ti);
    		arrivalTime = ceil(16200.0/Vi + Ti);
    		if (Ti >= 0 && arrivalTime < min)
    		{
    			min = arrivalTime;
    			// cout << min << '#' <<endl;
    		}
    	}
    	printf("%d\n", min);
    }
	return 0;
}