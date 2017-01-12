#include <stdio.h>
#include <vector>
#include <math.h>
#define _OJ_


using namespace std;
struct Point
{
	double x;
	double y;
};

int main(int argc, char const *argv[])
{
#ifndef _OJ_
    freopen("/Users/fzf_air/code/2017/POJ/text.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
#endif
    vector<Point> input;
    vector<int> output;
    double r = 2.5;
    // double eps = 0.0000000000001;
    int a, b;
    int N = 0;
    double q, x1, x2, y1, y2, x3, y3, q2;
    Point p, center1, center2;
    int count1, count2, max = 1;
    double dist1, dist2;
    while (scanf("%lf %lf",&p.x, &p.y) != EOF)
    {	
    	input.push_back(p);
    	N++;
    }
    for (int i = 0; i < N; ++i)
    {
    	for (int j = i + 1; j < N; ++j)
    	{
    		count1 = 0;
    		count2 = 0;
    		x1 = input[i].x; y1 = input[i].y;
    		x2 = input[j].x; y2 = input[j].y;
    		q = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    		if (q > 2*r)
    		{
    			continue;
    		}
			x3 = (x1+x2)/2;
			y3 = (y1+y2)/2;
			center1.x = x3 + sqrt(r*r-(q/2)*(q/2))*(y1-y2)/q;
			center1.y = y3 + sqrt(r*r-(q/2)*(q/2))*(x2-x1)/q;
			center2.x = x3 - sqrt(r*r-(q/2)*(q/2))*(y1-y2)/q;
			center2.y = y3 - sqrt(r*r-(q/2)*(q/2))*(x2-x1)/q;
    		for (int k = 0; k < N; ++k)
    		{
    			x1 = center1.x - input[k].x;
    			x2 = center2.x - input[k].x;
    			y1 = center1.y - input[k].y;
    			y2 = center2.y - input[k].y;
    			dist1 = sqrt(x1*x1 + y1*y1);
    			dist2 = sqrt(x2*x2 + y2*y2);
    			if (dist1 <= r) count1++;
    			if (dist2 <= r) count2++;
    		}
    		if (max <= count1) max = count1;
    		if (max <= count2) max = count2;
    	}
    }
    printf("%d\n", max);
	return 0;
}