/* Complexity: MN/2, where M - number of union operations, N - number of objects */
#include <iostream>

using namespace std;

static const int N = 10;

int main2()
{
	int i, j, p, q, id[N];
	for (i = 0; i < N; i++)
	{
		id[i] = i;
	}
	while (cin >> p >> q)
	{
		if (p == 'q') break; // to exit from while loop

		for (i = p; i != id[i]; i = id[i]);
		for (j = q; j != id [j]; j = id[j]);
		if (i == j) continue;
		id[i] = j;
		cout << " " << p << " " << q << endl;
	}

	for (i = 0; i < N; i ++)
	{
		cout << id [i] << " ";
	}
	return 0;
}



