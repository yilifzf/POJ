#include "stdio.h"
#include <map>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
    map<string, int> SpeciesCounter;
    char c;
    string name;
    int total = 0;
    while (scanf("%c", &c) != EOF) {
        if (c != '\n') {
            name.push_back(c);
        }
        else {
            pair<map<string, int>::iterator, bool> ret =
            SpeciesCounter.insert(make_pair(name, 1));
            if (!ret.second) {
                ++ret.first->second;
            }
            total++;
            name.clear();
        }
    }
    for (map<string, int>::iterator it = SpeciesCounter.begin(); it != SpeciesCounter.end(); ++it)
    {
        printf("%s %.4f\n", it->first.c_str(), (float)it->second/total * 100);
    }
    return 0;
}
