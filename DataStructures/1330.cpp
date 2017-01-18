#include <stdio.h>
#include <queue>
#include <vector>

using namespace std;

struct Node {
    int num;
    int parent;
    int tag;
    Node() : num(0), parent(0), tag(0){};
};

int main(int argc, char const *argv[]) {
    int T, N, x, y, z, curr, parent;
    std::vector<Node> tree;
    queue<int> q;
    scanf("%d", &T);
    int a, b;
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        tree.resize(N);
        for (int j = 0; j < (N - 1); j++) {
            scanf("%d %d", &a, &b);
            tree[b-1].parent = a;
        }
        // printf("#\n");
        scanf("%d %d", &x, &y);
        // printf("##\n");
        q.push(x);
        q.push(y);
        while(1) {
            curr = q.front();
            q.pop();
            if (tree[curr-1].tag) {
                z = curr;
                break;
            }
            else {
                tree[curr-1].tag = 1;
            }
            if (tree[curr-1].parent != 0) {
                q.push(tree[curr-1].parent);
            }
        }
        printf("%d\n", z);
        tree.clear();
        q = queue<int>();
    }
    return 0;
}
