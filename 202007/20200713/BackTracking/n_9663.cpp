#include "n_9663.h"


void NQueen::solution(int k)
{
	if (k == n)
	{
		cnt++;
		return;
	}

	for (int i = 0; i < n; ++i)
	{
		if (isused1[i]) continue;
		if (isused2[k + i]) continue;
		if (isused3[k - i + n - 1])continue;

		isused1[i] = true;
		isused2[k + i] = true;
		isused3[k - i + n - 1] = true;
		solution(k + 1);
		isused1[i] = false;
		isused2[k + i] = false;
		isused3[k - i + n - 1] = false;
	}
}

void NQueen::start()
{
	for (int i = 0; i < 40; ++i)
	{
		isused1[i] = false;
		isused2[i] = false;
		isused3[i] = false;
	}
	cnt = 0;

	scanf("%d", &n);
	solution(0);
	printf("%d", cnt);
}
