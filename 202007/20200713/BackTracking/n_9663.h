#pragma once

#pragma warning(disable :4996)
#include <iostream>
using namespace std;


class NQueen
{
private:
	int cnt;
	int n;
	bool isused1[40];
	bool isused2[40];
	bool isused3[40];

	void solution(int n);
public:
	void start();
};

