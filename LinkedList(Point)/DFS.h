#pragma once
#include "Stack.h"

class DFS
{
	Stack<int> m_stack;
	int m_sNode;	// 시작노드
	int m_tNode;	// 목적지 노드
	bool m_bFound;
public:
	DFS(int sn, int tn) : m_sNode(sn), m_tNode(tn), m_bFound(false) { }
	~DFS() { }

	void findPath();
	void draw();
};

