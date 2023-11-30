#include<stdio.h>
#include<conio.h>
#define INFINITY 9999
#define MAX 10
 
void dijikstra(int G[MAX][MAX], int n, int startnode);
void main(){
	int Graph[MAX][MAX], i, j, n, u;
    n = 9;
    u = 0;

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
  Graph[3][5] = 500;
  Graph[3][6] = 4;
  Graph[3][7] = 0;
  Graph[3][8] = 0;
  Graph[3][9] = 0;

//coluna I
  Graph[4][0] = 0;
  Graph[4][1] = 7;
  Graph[4][2] = 0;
  Graph[4][3] = 0;
  Graph[4][4] = 0;
  Graph[4][5] = 0;
  Graph[4][6] = 0;
  Graph[4][7] = 0;
  Graph[4][8] = 0;
  Graph[4][9] = 25;

//coluna B
  Graph[5][0] = 0;
  Graph[5][1] = 0;
  Graph[5][2] = 0;
  Graph[5][3] = 500;
  Graph[5][4] = 0;
  Graph[5][5] = 0;
  Graph[5][6] = 0;
  Graph[5][7] = 16;
  Graph[5][8] = 0;
  Graph[5][9] = 0;

//coluna L
  Graph[6][0] = 0;
  Graph[6][1] = 0;
  Graph[6][2] = 0;
  Graph[6][3] = 4;
  Graph[6][4] = 0;
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
  
	dijikstra(Graph,n,u);
	getch();
}
 
void dijikstra(int G[MAX][MAX], int n, int startnode)
{
    
	int cost[MAX][MAX], distance[MAX], pred[MAX];
	int visited[MAX], count, mindistance, nextnode, i,j;
	char listName[10] = {'A', 'N', 'O', 'S', 'I', 'B', 'L', 'H', 'C', 'G'};

	for(i=0;i < n;i++)
		for(j=0;j < n;j++)
			if(G[i][j]==0)
				cost[i][j]=INFINITY;
			else
				cost[i][j]=G[i][j];
	
	for(i=0;i< n;i++)
	{
		distance[i]=cost[startnode][i];
		pred[i]=startnode;
		visited[i]=0;
	}
	distance[startnode]=0;
	visited[startnode]=1;
	count=1;
	while(count < n-1){
		mindistance=INFINITY;
		for(i=0;i < n;i++)
			if(distance[i] < mindistance&&!visited[i])
			{
				mindistance=distance[i];
				nextnode=i;
			}
		visited[nextnode]=1;
		for(i=0;i < n;i++)
			if(!visited[i])
				if(mindistance+cost[nextnode][i] < distance[i])
				{
					distance[i]=mindistance+cost[nextnode][i];
					pred[i]=nextnode;
				}
			count++;
	}
 
	for(i=0;i < n;i++)
		if(i!=startnode){
			printf("\nDistance of %c = %i", listName[i], distance[i]);
		//	printf("\nCaminho para %c", listName[i]);

			j=i; //
			do{
				j=pred[j];
				printf(" <-%c", listName[j]);
			//	printf("%c", listName[j]);
			}
			while(j!=startnode);
		}
}