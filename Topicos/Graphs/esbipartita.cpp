#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;      
typedef vector<ii> vii;      
typedef vector<int> vi;   

#define DFS_WHITE -1 // normal DFS
#define DFS_BLACK 1

vector<vii> AdjList;
int V; // numero de vertices

vi color;  // Inicializar en DFS_WHITE  (-1)
int bipartita(int s) {
	queue<int> q; q.push(s); color[s] = 0; int esBipartita = 1;
	while (!q.empty() && esBipartita) {
		int u = q.front(); q.pop();   
		for (int j = 0; j < (int)AdjList[u].size(); j++) {
		  ii v = AdjList[u][j];                           
		  if (color[v.first] == DFS_WHITE) {
			color[v.first] = 1-color[u]; 			
			q.push(v.first);                     
		  }
		  else if (color[v.first] == color[u]) {
                esBipartita=0;  break;
		  }
		}	  
	}
	return esBipartita;
}


int main() {
 	int i;
  	// lectura de datos ...
	color.assign(V, DFS_WHITE); // V es num de vertices
	for (int i = 0; i < V; i++) {
	    if (color[i] == DFS_WHITE) {
	      printf("Componente con raiz en %d:", i);
	      int esB=bipartita(i);
		  printf(", bipartita=%d\n", esB);
	    }
	}
	return 0;
}
