#include <stdio.h>
#include <math.h>
#define _OJ_

int main(int argc, char const *argv[])
{
#ifndef _OJ_
    freopen("/Users/fzf_air/code/2017/POJ/text.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
#endif
    double x1, y1, x2, y2, x3, y3;
    double a, b, c, d, e, f;
    double xCenter, yCenter;
    double dist;
    double circle;
    double pi = acos(-1);
    while(scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3) != EOF) {
        a = x2 - x1;
        b = y2 - y1;
        c = (x1*x1 + y1*y1 - x2*x2 - y2*y2)/2;
        d = x2 - x3;
        e = y2 - y3;
        f = (x3*x3 + y3*y3 - x2*x2 - y2*y2)/2;
        xCenter = (f*b-c*e)/(a*e-b*d);
        yCenter = (c*d-f*a)/(a*e-b*d);
        dist = sqrt((xCenter - x1)*(xCenter - x1) + (yCenter - y1)*(yCenter - y1));
        circle = 2 * pi * dist;
        printf("%.2f\n", circle);
    }
	return 0;
}