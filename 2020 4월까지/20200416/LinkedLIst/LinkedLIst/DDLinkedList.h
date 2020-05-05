#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class DDLinkedList
{
private:
	static const int MX = 1000005;
	int dst[MX], prev[MX], next[MX];
	//0은 시작을 위해 빈 노드
	int unused = 1;

public:
	DDLinkedList()
	{
		fill(prev, prev + MX, -1);
		fill(next, next + MX, -1);
	}
	void insert(int addr, int num);
	void erase(int addr);
	void traverse();
};

