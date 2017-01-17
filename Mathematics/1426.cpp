#include <stdio.h>
#include <vector>
#include <queue>
typedef long long myInt;
using namespace std;

myInt bfs(myInt n)
{
	myInt curr = 1;
	queue<myInt> q;
	q.push(curr);
	while (1)
	{
		curr = q.front();
		q.pop();
		if (curr % n == 0)
		{
			return curr;
		}
		q.push(curr*10);
		q.push(curr*10 + 1);
	}
}

int main(int argc, char const *argv[])
{
	myInt a;
	while (1)
	{
		scanf("%lld", &a);
		if (a == 0)
		{
			break;
		}
		printf("%lld\n", bfs(a));
	}
	return 0;
}
