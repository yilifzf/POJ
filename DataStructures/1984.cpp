#include <stdio.h>
struct Farmer {
    int x;
    int y;
    int farther;
    Farmer(int _x = 0, int _y = 0; int _f = 0) : x(_x), y(_y), father(_f){};
};

int main(int argc, char const *argv[]) {
    int N, M;
    int F1, F2, L;
    char D;
    Farmer farmers[N];
    for (int i = 0; i < M; i++) {
        scanf("%d %d %d %c", &F1, &F2, &L, &D);

    }
    return 0;
}
