#include "CorporationSalary.h"

long long CorporationSalary::getSalary(int i, vector<string> relations)
{
	if (salaries[i] <= 0)
	{
		string relation = relations[i];
		int n = relation.size();
		long long salary = 0;
		for (int j = 0; j < n; ++j)
		{
			if (relation[j] == 'Y')
			{
				salary += getSalary(j, relations);
			}
		}
		if (salary == 0) salary = 1;
		salaries[i] = salary;
	}

	return salaries[i];
}

long long CorporationSalary::totalSalary(vector<string> relations)
{

	int N = relations.size();

	long long total = 0;

	for (int i = 0; i < N; ++i)
	{
		total += getSalary(i, relations);
	}

	return total;
}
