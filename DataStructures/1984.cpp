#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

struct Farmer {
    int x;
    int y;
    int father;
    int count;
    Farmer(int _x = 0, int _y = 0, int _f = 0, int _count = 0)
        : x(_x), y(_y), father(_f), count(_count){};
};

vector<Farmer> farmers;

int dist(int f1, int f2) {
    int n1 = f1;
    int n2 = f2;
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    while (farmers[n1-1].father != 0) {
        x1 += farmers[n1-1].x;
        y1 += farmers[n1-1].y;
        n1 = farmers[n1-1].father;
    }
    while (farmers[n2-1].father != 0) {
        x2 += farmers[n2-1].x;
        y2 += farmers[n2-1].y;
        n2 = farmers[n2-1].father;
    }
    if (n1 == n2) {
        return abs(x1 - x2) + abs(y1 - y2);
    }
    return -1;
}

int main(int argc, char const *argv[]) {
    int N, M;
    scanf("%d %d", &N, &M);
    farmers.resize(N);
    int F1[N], F2[N], L[N];
    char D[N];
    for (int i = 0; i < M; i++) {
        scanf("%d %d %d %c", &F1[i], &F2[i], &L[i], &D[i]);
    }
    int index = 1;
    int K, f1, f2, I;
    int a, b, l;
    char d;
    int father1, father2;
    int dx, dy, dx1, dy1, dx2, dy2;
    scanf("%d", &K);
    for (size_t i = 0; i < K; i++) {
        scanf("%d %d %d", &f1, &f2, &I);
        while (index <= I) {
            a = F1[index - 1];
            b = F2[index - 1];
            l = L[index - 1];
            d = D[index - 1];
            switch (d) {
                case 'E' : dx = l; dy = 0; break;
                case 'S' : dx = 0; dy = -l; break;
                case 'W' : dx = -l; dy = 0; break;
                case 'N' : dx = 0; dy = l; break;
            }
            dx1 = 0; dy1 = 0;
            dx2 = dx; dy2 = dy;
            father1 = a;
            father2 = b;
            while (farmers[father1-1].father != 0) {
                dx1 += farmers[father1-1].x;
                dy1 += farmers[father1-1].y;
                father1 = farmers[father1-1].father;
            }
            while (farmers[father2-1].father != 0) {
                dx2 -= farmers[father2-1].x;
                dy2 -= farmers[father2-1].y;
                father2 = farmers[father2-1].father;
            }
            farmers[father2-1].father = father1;
            farmers[father2-1].x = dx2 + dx1;
            farmers[father2-1].y = dy2 + dy1;
            index++;
        }
        printf("%d\n", dist(f1, f2));
    }
    return 0;
}
