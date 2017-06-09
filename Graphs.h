#pragma once
#ifndef GRAPHS_H
#define GRAPHS_H

#include<iostream>
#include<vector>
#include<queue>
#include<ctime>

using namespace std;

class graphs {

public:
	//insert
	int vert, start, end;
	vector<vector<int>> edge_flow;
	
	//out
	int maximum_flow;
	vector<vector<int>> edge_inuse_flow;

	//help element
	int vertex_remember, remember_rez_value, x_edge, y_edge;
	vector<int> earlier_pass;
	vector<int> last_path_value_remember;
	queue<int> vertex_save;

	//constructors
	graphs(int vert);
	void edge_flow_prepare();


	//methods
	void vertex_set(int vertex); 



};

#endif 
