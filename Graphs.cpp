#include "Graphs.h"

graphs::graphs(int vertex):edge_flow(vertex,vector<int>(vertex)), edge_netto_flow(vertex,vector<int>(vertex)), earlier_pass(vertex), last_path_value_remember(vertex), pass_available(vertex,vector<int>(vertex))
{
	vertex_set(vertex);
	pass_prepare();
	edge_flow_prepare();
	
}

void graphs::edge_flow_prepare()
{
	srand(time(NULL));
	for (int i = 0; i < vert; i++)
	{
		for (int j = 0; j < vert; j++)
		{
			if(pass_available[i][j]==1)
			edge_flow[i][j]= 15 + vert+1;
			else
				edge_flow[i][j] = ((rand() % 15) + 3);

		}
	}
}

void graphs::pass_prepare()
{
	srand(time(NULL));
	for (int i = 0; i < vert; i++)
	{
		for (int j = 0; j < vert; j++)
		{
			if (i == j)
				pass_available[i][j] = 1;
			else
			{
				pass_available[i][j] = ((rand() % 2) + 0);
				pass_available[j][i] = pass_available[i][j];
			}
			
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
