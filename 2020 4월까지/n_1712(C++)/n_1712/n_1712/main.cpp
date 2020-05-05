#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	long num1, num2, num3;
	cin >> num1 >> num2 >> num3;

	long count = num3 - num2;
	
	if (count <= 0)
	{
		count = -1;
	}
	else 
	{
		long temp = num1 / count + 1;
		count = temp;
	}

	cout << count;
}