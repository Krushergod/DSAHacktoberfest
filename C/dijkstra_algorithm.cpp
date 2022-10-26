#include<stdio.h>
#include<climits>
int v;
int selectminvertex(int value[],int processed[])
{
	int minium=INT_MAX;
	int vertex;
	for(int i=0; i<v; i++)
	{
		if(processed[i]==false && value[i]<minium)
		{
			vertex=i;
			minium=value[i];
		}
	}
	return vertex;
}
int dijkstra ( int graph[100][100] )
{
	int u;
	int parent[v];
	int value[v]={INT_MAX};
	int processed[v]={false};
	parent[0]=-1;
	value[0]=0;
	for(int i=0; i<v-1; i++)
	{
		u=selectminvertex(value,processed);
		processed[u]=true;
	}
	for(int j=0;j<v;j++)
	{
		if(graph[u][j]!=0 && processed[j]==false && value[u]!=INT_MAX && (value[u]+graph[u][j]<value[j]))
		{
			value[j]=value[u]+graph[u][j];
			parent[j]=u;
		}
	}
 for(int i=1; i<v;i++)
 {
 	printf("u->v: %d-->%d -->wt == %d\n",parent[i],i,graph[parent[i]][i]);
	 }	
	
}
int main()
{
	int i,j;
	scanf("%d",&v);
	int graph[100][100];
	for(int i=0; i<v; i++)
	{
		for(int j=0; j<v;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
	
	dijkstra(graph);
	return 0;
}
