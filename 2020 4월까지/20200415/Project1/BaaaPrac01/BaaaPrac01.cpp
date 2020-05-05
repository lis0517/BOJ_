#include "BaaaPrac01.h"

int BaaaPrac01::func01(int n)
{
	int ans = 0;

	for (int i = 3; i <= n; ++i)
	{
		if (!(i % 3) || !(i % 5))
		{
			ans += i;
		}
	}

	return ans;
}
