#include "BOJ10808.h"

void BOJ10808::func01(string s)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int alpha[26];

	fill(alpha, alpha+26, 0);

	for (int i = 0; i < s.size(); ++i)
	{	
		alpha[s[i] - 'a']++;
	}

	for (int i = 0; i < 27; ++i)
	{
		cout << alpha[i] << " ";
	}
}
