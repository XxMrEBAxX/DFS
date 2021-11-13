#pragma once
#include "Stack.h"

class DFS
{
	Stack<int> m_stack;
	int m_sNode;	// ���۳��
	int m_tNode;	// ������ ���
	bool m_bFound;
public:
	DFS(int sn, int tn) : m_sNode(sn), m_tNode(tn), m_bFound(false) { }
	~DFS() { }

	void findPath();
	void draw();
};

