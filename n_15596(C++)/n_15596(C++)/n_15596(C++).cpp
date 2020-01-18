#include <iostream>
#include <vector>

long long sum(std::vector<int>& a)
{
	long long ans = 0;
	for (std::vector<int>::iterator iter = a.begin(); iter != a.end(); ++iter)
	{
		ans += (*iter);
	}
	return ans;
}

int main()
{
	std::vector<int> vec;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);

	long long ret = sum(vec);

    std::cout << ret;
}
