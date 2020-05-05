#include "BaaaPrac02.h"

int BaaaPrac02::func01(vector<int> arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (arr[i] == arr[j]) continue;

			if ((arr[i] + arr[j]) == 100)
				return 1;
		}
	}
	return 0;
}
