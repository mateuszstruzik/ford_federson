#pragma once
#ifndef ALGORITHM_H
#define	ALGORITHM_H

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Algorithm {
public:
	void Ford(int vert, int start, int end,int maximum_flow, vector<vector<int>> edge_flow, vector<vector<int>> edge_netto_flow,vector<vector<int>>);
};

#endif // !1
