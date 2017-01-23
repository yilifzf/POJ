#include <stdio.h>
#include <map>
#include <string>
#include <iostream>
using namespace std;
struct Node {
    string lable;
    int priority;
    int lChild;
    int rChild;
};
Node tree[50000];

int insert(int p, int n) {
    int _hot = n;
    if (tree[p-1].lable < tree[n-1].lable) {
        if (tree[n-1].lChild == 0) {
            tree[n-1].lChild = p;
            return n;
        }
        else {
            return insert(p, tree[n-1].lChild);
        }
    }
    if (tree[p-1].lable > tree[n-1].lable) {
        if (tree[n-1].rChild == 0) {
            tree[n-1].rChild = p;
            return n;
        }
        else {
            return insert(p, tree[n-1].rChild);
        }
    }
    return 0;
}

void printTree(int root) {
    if (root == 0) {
        return;
    }
    printf("(");
    printTree(tree[root-1].lChild);
    printf("%s/%d", tree[root-1].lable.c_str(), tree[root-1].priority);
    printTree(tree[root-1].rChild);
    printf(")");
}

int main(int argc, char const *argv[]) {
    int n;
    string lb;
    map<int, string> input;
    char ch;
    int r;
    int p;
    while (scanf("%d", &n) && n) {
        if (n > 5000) {
            printf("fuck\n");
            return 0;
        }
        for (size_t i = 0; i < n; i++) {
            getchar();
            while (scanf("%c", &ch) && ch != '/') {
                lb.push_back(ch);
            }
            scanf("%d", &p);
            // printf("##%s##\n", lb.c_str());
            // printf("$$%d$$\n", p);
            input.insert(make_pair(p, lb));
            lb.clear();
        }
        getchar();
        int r = 0;
        for (map<int, string>::iterator it = input.begin(); it != input.end(); ++it) {
            tree[r].lable = it->second;
            // printf("##%d##\n", it->first);
            // printf("$$%s$$\n", it->second.c_str());
            tree[r].priority = it->first;
            tree[r].lChild = 0;
            tree[r].rChild = 0;
            r++;
            // printf("&&%d&&\n", r);
        }
        input.clear();
        for (size_t i = 0; i < n; i++) {
            insert(n - i, n);
        }
        printTree(n);
        printf("\n");
    }
    return 0;
}
