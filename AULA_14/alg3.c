/*****Please include following header files*****/
#include<stdio.h>
#include<limits.h>
#include<stdbool.h>
/***********************************************/

#define VERTICES_COUNT 10

int MinimumDistance(int distance[], int shortestPathTreeSet[]){
	int min = INT_MAX;
	int minIndex = 0;

	for (int v = 0; v < VERTICES_COUNT; ++v){
		if (shortestPathTreeSet[v] == false && distance[v] <= min){
			min = distance[v];
			minIndex = v;
		}
	}
	return minIndex;
}

void Print(int distance[]){
	printf("Vertex    Distance from source\n");
	for (int i = 0; i < VERTICES_COUNT; ++i)
		printf("%d\t  %d\n", i, distance[i]);
}

void Dijkstra(int graph[VERTICES_COUNT][VERTICES_COUNT], int source){
	int distance[VERTICES_COUNT];
	int shortestPathTreeSet[VERTICES_COUNT];

	for (int i = 0; i < VERTICES_COUNT; ++i){
		distance[i] = INT_MAX;
		shortestPathTreeSet[i] = false;
	}

	distance[source] = 0;

	for (int count = 0; count < VERTICES_COUNT - 1; ++count){
		int u = MinimumDistance(distance, shortestPathTreeSet);
		shortestPathTreeSet[u] = true;

		for (int v = 0; v < VERTICES_COUNT; ++v)
			if (!shortestPathTreeSet[v] && graph[u][v] && distance[u] != INT_MAX && distance[u] + graph[u][v] < distance[v])
				distance[v] = distance[u] + graph[u][v];
	}
	Print(distance);
}

//vertices {} = ['A', 'N', 'O', 'S', 'I', 'B', 'L', 'H', 'C', 'G']

int graph[VERTICES_COUNT][VERTICES_COUNT] = {
	{ 0, 4, 15, 0, 0, 0, 0, 0, 0,0 },
	{ 4, 0, 3, 7, 0, 0, 0, 0, 0 },
	{ 15, 0, 0, 2, 0, 0, 0, 0, 0,0 },
	{ 0, 3, 2, 0, 0, 0, 4, 0, 0,0 },
	{ 0, 4, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 500, 0, 0, 0, 16, 0,0 },
	{ 0, 0, 0, 4, 0, 0, 0, 7, 0, 0 },
	{ 0, 0, 0, 0, 0, 16, 7, 0, 45, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 45, 0, 80 },
	{ 0, 0, 0, 0, 25, 0, 0, 0, 80, 0 }
};

Dijkstra(graph[10][10], 0);
