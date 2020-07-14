#pragma once

#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

class NM
{
private:
	int n, m;
	int arr[10];
	bool isused[10];
	void solution(int k);
public:
	void start();

};