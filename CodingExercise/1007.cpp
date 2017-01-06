#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <string>
#define _OJ_

using namespace std;

int calculate(string s)
{
	int n = s.length();
    int inversions = 0;
    int count[4] = {0,0,0,0};
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'A')
        {
            count[0]++;
            inversions += count[1] + count[2] + count[3];
        }
        if (s[i] == 'C')
        {
            count[1]++;
            inversions += count[2] + count[3];
        }
        if (s[i] == 'G')
        {
            count[2]++;
            inversions += count[3];
        }
        if (s[i] == 'T')
        {
            count[3]++;
        }
    }
    return inversions;
}

int main(int argc, char const *argv[])
{
#ifndef _OJ_
    freopen("/Users/fzf_air/code/2017/POJ/text.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
#endif
    vector<string> input;
    vector<int> output;
    multimap<int, int> string_sorted;
    float a;
    int N = 0;
    int len;
    scanf("%d %d\n", &len, &N);
    char buf[len];
    for (int i = 0; i < N; ++i)
    {
        gets(buf);
        input.push_back(string(buf));
    }
    for (int i = 0; i < N; ++i)
    {
        // string s = input[i];
        // printf("%s %d\n", s.c_str(), calculate(s));
        string_sorted.insert(make_pair(calculate(input[i]), i));
    }
    for (multimap<int, int>::iterator it = string_sorted.begin(); it != string_sorted.end(); ++it)
    {
        cout << input[it->second] << endl;
    }
	return 0;
}