#pragma once

#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class CorporationSalary
{
private:
	long long salaries[50];
	long long getSalary(int i, vector<string> relations);
public:
	long long totalSalary(vector<string> relations);
};

