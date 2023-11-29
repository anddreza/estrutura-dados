
//[LINHA] [COLUNA] LEMBRAR!!!!!!!!!
#include <stdio.h>
#define INFINITY 9999
#define MAX 10

void Dijkstra(int Graph[MAX][MAX], int n, int start);

void Dijkstra(int Graph[MAX][MAX], int n, int start) {
  int cost[MAX][MAX], distance[MAX], pred[MAX];
  int visited[MAX], count, mindistance, nextnode, i, j;

  // Construir o grafo
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      if (Graph[i][j] == 0)
        cost[i][j] = INFINITY;
      else
        cost[i][j] = Graph[i][j]; //uma tabela com o custo de cada vértice

  for (i = 0; i < n; i++) {
    distance[i] = cost[start][i];
    pred[i] = start;
    visited[i] = 0;
  }

	//determinando ponto inicial e ponto visitado 
  distance[start] = 0;
  visited[start] = 1;
  count = 1;

	//andando no grafo
  while (count < n - 1) {
    mindistance = INFINITY;

	//pega a distancia do nó, ele verifica as arestas ou distancias
    for (i = 0; i < n; i++){
	//se o nó não foi visitado e se a distancia para esse nó é menor que 9999, ou seja, não é o próprio nó
      if (distance[i] < mindistance && !visited[i]) {
		//não entrará nesse if se a partida e a chegada forem iguais OU se ele chegar
        mindistance = distance[i];
        nextnode = i;
      }
	}  

	//ele marca os proximos nós para ser visitado
    visited[nextnode] = 1;
    for (i = 0; i < n; i++)
      if (!visited[i]) //se não foi visitado 
        if (mindistance + cost[nextnode][i] < distance[i]) { //se a menor distancia (de onde ele está) + o custo (=arestas) no proximo nó na coluna i for menor que a distancia de i 
          distance[i] = mindistance + cost[nextnode][i];
          pred[i] = nextnode;
        }
    count++;
  }

  // print das informações
  for (i = 0; i < n; i++)
    if (i != start) {
      printf("\nDistance from source to %d: %d", i, distance[i]);
    }
}
int main() {
  int Graph[MAX][MAX], i, j, n, u;
  n = 10;

//coluna A
  Graph[0][0] = 0;  
  Graph[0][1] = 4;
  Graph[0][2] = 15;
  Graph[0][3] = 0;
  Graph[0][4] = 0;
  Graph[0][5] = 0;
  Graph[0][6] = 0;
  Graph[0][7] = 0;
  Graph[0][8] = 0;
  Graph[0][9] = 0;

//coluna N
  Graph[1][0] = 4;
  Graph[1][1] = 0;
  Graph[1][2] = 0;
  Graph[1][3] = 3;
  Graph[1][4] = 7;
  Graph[1][5] = 0;
  Graph[1][6] = 0;
  Graph[1][7] = 0;
  Graph[1][8] = 0;
  Graph[1][9] = 0;

//coluna O
  Graph[2][0] = 15;
  Graph[2][1] = 0;
  Graph[2][2] = 0;
  Graph[2][3] = 2;
  Graph[2][4] = 0;
  Graph[2][5] = 0;
  Graph[2][6] = 0;
  Graph[2][7] = 0;
  Graph[2][8] = 0;
  Graph[2][9] = 0;

// coluna S
  Graph[3][0] = 0;
  Graph[3][1] = 3;
  Graph[3][2] = 2;
  Graph[3][3] = 0;
  Graph[3][4] = 0;
  Graph[3][5] = 0;
  Graph[3][6] = 4;
  Graph[3][7] = 0;
  Graph[3][8] = 0;
  Graph[3][9] = 0;

//coluna I
  Graph[4][0] = 0;
  Graph[4][1] = 4;
  Graph[4][2] = 0;
  Graph[4][3] = 0;
  Graph[4][4] = 0;
  Graph[4][5] = 0;
  Graph[4][6] = 0;
  Graph[4][7] = 0;
  Graph[4][8] = 0;
  Graph[4][9] = 0;

//coluna B
  Graph[5][0] = 0;
  Graph[5][1] = 3;
  Graph[5][2] = 0;
  Graph[5][3] = 500;
  Graph[5][4] = 2;
  Graph[5][5] = 0;
  Graph[5][6] = 1;
  Graph[5][7] = 16;
  Graph[5][8] = 0;
  Graph[5][9] = 0;

//coluna L
  Graph[6][0] = 0;
  Graph[6][1] = 0;
  Graph[6][2] = 0;
  Graph[6][3] = 0;
  Graph[6][4] = 4;
  Graph[6][5] = 0;
  Graph[6][6] = 0;
  Graph[6][7] = 7;
  Graph[6][8] = 0;
  Graph[6][9] = 0;

//coluna H
  Graph[7][0] = 0;
  Graph[7][1] = 0;
  Graph[7][2] = 0;
  Graph[7][3] = 0;
  Graph[7][4] = 0;
  Graph[7][5] = 16;
  Graph[7][6] = 7;
  Graph[7][7] = 0;
  Graph[7][8] = 45;
  Graph[7][9] = 0;

//coluna C
  Graph[8][0] = 0;
  Graph[8][1] = 0;
  Graph[8][2] = 0;
  Graph[8][3] = 0;
  Graph[8][4] = 0;
  Graph[8][5] = 0;
  Graph[8][6] = 0;
  Graph[8][7] = 45;
  Graph[8][8] = 0;
  Graph[8][9] = 80;

//coluna G
  Graph[9][0] = 0;
  Graph[9][1] = 0;
  Graph[9][2] = 0;
  Graph[9][3] = 0;
  Graph[9][4] = 25;
  Graph[9][5] = 0;
  Graph[9][6] = 0;
  Graph[9][7] = 0;
  Graph[9][8] = 80;
  Graph[9][9] = 0;

  u = 0;
  Dijkstra(Graph, n, u);

  return 0;
}