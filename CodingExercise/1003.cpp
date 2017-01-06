#include <stdio.h>
#include <vector>
#define _OJ_

using namespace std;

int calculate(float f)
{
	int i = 1;
	float sum = 0;
	while (sum < f) 
	{
		i++;
		sum += 1.0/i;
	}
	return i-1;
}

int main(int argc, char const *argv[])
{
#ifndef _OJ_
    freopen("/Users/fzf_air/code/2017/POJ/text.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
#endif
    vector<float> input;
    vector<int> output;
    float a;
    int N = 0;
    while (true)
    {
    	scanf("%f",&a);
    	if (a == 0)
    	{
    		break;
    	}
    	input.push_back(a);
    	N++;
    }
    for (int i = 0; i < N; ++i)
    {
    	output.push_back(calculate(input[i]));
    }
    for (int i = 0; i < N; ++i)
    {
    	printf("%d card(s)\n", output[i]);
    }
	return 0;
}