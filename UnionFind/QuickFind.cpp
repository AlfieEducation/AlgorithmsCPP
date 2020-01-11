/* Complexity: MN, where M - number of union operations, N - number of objects */
#include <iostream>

using namespace std;

static const int N = 10;

int main_()
{
	int i, p, q, id[N];
	for (i = 0; i < N; i++)
	{
		id[i] = i;
	}
	while (cin >> p >> q)
	{
		int t = id[p];
		if (t == id[q]) continue;
		if (p == 'q') break; // to exit from while loop
		for (i = 0; i < N; i++)
		{
			if (id[i] == t) id[i] = id[q];
		}
		cout << " " << p << " " << q << endl;
	}

	for (i = 0; i < N; i ++)
	{
		cout << id [i] << " ";
	}
	return 0;
}



