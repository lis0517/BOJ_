#include "n_15649.h"

void NM::solution(int k)
{
	if (k == m)//base condition
	{
		for (int i = 0; i < m; ++i)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
		return;
	}

	for (int i = 1; i <= n; ++i)
	{
		if (!isused[i])
		{
			arr[k] = i;
			isused[i] = true;
			solution(k + 1);
			isused[i] = false;
		}
	}
}

void NM::start()
{
	fill(arr, arr + 10, 0);

	for (int i = 0; i < 10; ++i)
	{
		isused[i] = false;
	}

	scanf("%d %d", &n, &m);

	solution(0);
}
