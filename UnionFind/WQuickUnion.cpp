/* Complexity: M * logN, where M - number of union operations, N - number of objects */
#include <iostream>

using namespace std;

static const int N = 10;

int main3()
{
	int i, j, p, q, id[N], sz[N];
	for (i = 0; i < N; i++)
	{
		id[i] = i;
		sz[i] = 1;
	}
	while (cin >> p >> q)
	{
		if (p == 'q') break; // to exit from while loop

		for (i = p; i != id[i]; i = id[i]);
		for (j = q; j != id [j]; j = id[j]);
		if (i == j) continue;
		if (sz[i] < sz[j]) {
			id[i] = j;
			sz[j] += sz[i];
		} else {
			id[j] = i;
			sz[i] += sz[j];
		}
		cout << " " << p << " " << q << endl;
	}

	for (i = 0; i < N; i ++)
	{
		cout << id [i] << " ";
	}
	return 0;
}



