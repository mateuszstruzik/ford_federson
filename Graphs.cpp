#include "Graphs.h"

graphs::graphs(int vertex):edge_flow(vertex,vector<int>(vertex)), edge_inuse_flow(vertex,vector<int>(vertex)), earlier_pass(vertex), last_path_value_remember(vertex)
{
	vertex_set(vertex);
	edge_flow_prepare();
}

void graphs::edge_flow_prepare()
{
	srand(time(NULL));
	for (int i = 0; i < vert; i++)
	{
		for (int j = 0; j < vert; j++)
		{
			edge_flow[i][j]= ((rand() % 15) + 3);

		}
	}
}

void graphs::vertex_set(int vertex)
{
	cout << "number of vertex " ;
	 vert=vertex;
	 cout << vert << endl;
	cout << "set source vertex " << endl;
	cin >> start;
	cout << "set sink vertex " << endl;
	cin >> end;
	
}
