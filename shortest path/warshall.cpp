#include <bits/stdc++.h>
using namespace std;

#define V 3
#define max 99999

void printSolution(int dist[][V]);
void floydWarshall(int dist[][V]){
	int i, j, k;
	for (k = 0; k < V; k++) {
		for (i = 0; i < V; i++) {
			for (j = 0; j < V; j++) {
				if (dist[i][j] > (dist[i][k] + dist[k][j]) && (dist[k][j] != max && dist[i][k] != max))
					dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	
    }printSolution(dist);
}

void printSolution(int dist[][V]){
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			if (dist[i][j] == max)
				cout << "max"<< " ";
			else
				cout << dist[i][j] << " ";
		}cout << endl;
	}
}
int main(){
	int graph[V][V] = {{ 0, 4, 11 },{ 6, 0,2 },{ 3, max, 0}};
	floydWarshall(graph);
	return 0;
}
