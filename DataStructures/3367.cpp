#include <stdio.h>
#include <stack>
#include <queue>
#include <string>
#include <iostream>
using namespace std;

struct Node {
    char c;
    Node * leftChild;
    Node * rightChild;
    Node(char _c = '0') : c(_c), leftChild(0), rightChild(0) {};
};

int main(int argc, char const *argv[]) {
    int T;
    char line[10000];
    char c;
    string expression;
    stack<Node *> s;
    queue<Node *> q;
    stack<char> out;
    Node * root;
    Node nodes[10000];
    int n;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        cin >> expression;
        n = expression.size();
        for (int j = 0; j < expression.size(); j++) {
            c = expression[j];
            nodes[j].c = c;
            nodes[j].leftChild = 0;
            nodes[j].rightChild = 0;
            if (isupper(c)) {
                nodes[j].rightChild = s.top();
                s.pop();
                nodes[j].leftChild = s.top();
                s.pop();
            }
            s.push(nodes + j);
        }
        root = s.top();
        s.pop();
        q.push(root);
        while (!q.empty()) {
            Node * curr = q.front();
            q.pop();
            expression[--n] = curr->c;
            if (curr->leftChild != 0) q.push(curr->leftChild);
            if (curr->rightChild != 0) q.push(curr->rightChild);
        }
        printf("%s\n", expression.c_str());
    }
    return 0;
}
