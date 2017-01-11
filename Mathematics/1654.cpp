#include <stdio.h>
#include <vector>
#include <stdlib.h>
#define _OJ_

using namespace std;

struct Point
{
    int x;
    int y;
};

int main(int argc, char const *argv[])
{
#ifndef _OJ_
    freopen("/Users/fzf_air/code/2017/POJ/text.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
#endif
    vector<Point> *points;
    vector<int> output;
    int N = 0;
    int prev, curr, count;
    long long result;
    Point tmp, newP;
    bool flag;
    scanf("%d", &N);
    getchar();
    for (int i = 0; i < N; ++i)
    {
        prev = 0;
        tmp.x = 0;
        tmp.y = 0;
        result = 0;
        flag = 0;
        count = 1;
        points = new vector<Point>(0);
        while ((curr = getchar() - '0') != 5)
        {
            if (curr == prev)
            {
                count++;
                continue;
            }
            else
            {
                switch (curr) {
                    case 1 : newP.x = tmp.x - count; newP.y = tmp.y - count; break;
                    case 2 : newP.x = tmp.x; newP.y = tmp.y - count; break;
                    case 3 : newP.x = tmp.x + count; newP.y = tmp.y - count; break;
                    case 4 : newP.x = tmp.x - count; newP.y = tmp.y; break;
                    case 5 :
                    case 6 : newP.x = tmp.x + count; newP.y = tmp.y; break;
                    case 7 : newP.x = tmp.x - count; newP.y = tmp.y + count; break;
                    case 8 : newP.x = tmp.x; newP.y = tmp.y + count; break;
                    case 9 : newP.x = tmp.x + count; newP.y = tmp.y + count; break;
                }
                if (flag) {
                    points->push_back(tmp);
                }
                flag = 1;
                tmp = newP;
                count = 1;
            }
        }
        getchar();
        if (points->size() < 2)
        {
            printf("0\n");
        }
        else
        {
            for (int i = 0; i < points->size() - 1; ++i)
            {
                Point p1 = points->at(i);
                Point p2 = points->at(i+1);
                result += p1.x * p2.y - p2.x * p1.y;
            }
            result = llabs(result);
            if ((result % 2) == 0)
            {
            	printf("%lld\n", result/2);
            }
            else {
            	printf("%lld.5\n", result/2);
            }
        }
        delete points;
    }
    return 0;
}