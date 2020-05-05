#include "Prac04.h"

int Prac04::func04(int n)
{
	int ans = 0;

	for (int i = 1; i <= n; i *= 2)
	{
		ans = i;
	}

	return ans;
}
