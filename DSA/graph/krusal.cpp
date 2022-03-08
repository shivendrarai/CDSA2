#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Edge {
int src, dest, weight;
};
struct Graph {
int V, E;
struct Edge* edge;
};
struct Graph* createGraph(int V, int 
E)
{
struct Graph* graph = (struct 
Graph*)(malloc(sizeof(struct 
Graph)));
graph->V = V;
graph->E = E;
graph->edge = (struct 
Edge*)malloc(sizeof( struct 
Edge)*E);
return graph;
}
struct subset {
int parent;
int rank;
};
int find(struct subset subsets[], int i)
{
if (subsets[i].parent != i)
subsets[i].parent
= find(subsets, 
subsets[i].parent);
return subsets[i].parent;
}
void Union(struct subset subsets[], 
int x, int y)
{
int xroot = find(subsets, x);
int yroot = find(subsets, y);
if (subsets[xroot].rank < 
subsets[yroot].rank)
subsets[xroot].parent = 
yroot;
else if (subsets[xroot].rank > 
subsets[yroot].rank)
subsets[yroot].parent = 
xroot;
else
{
subsets[yroot].parent = 
xroot;
subsets[xroot].rank++;
}
}
int myComp(const void* a, const 
void* b)
{
struct Edge* a1 = (struct 
Edge*)a;
struct Edge* b1 = (struct 
Edge*)b;
return a1->weight > b1->weight;
}
void KruskalMST(struct Graph* graph)
{
int V = graph->V;
struct Edge
result[V];
int e = 0;
int i = 0;
qsort(graph->edge, graph->E, 
sizeof(graph->edge[0]),
myComp);
struct subset* subsets
= (struct 
subset*)malloc(V * sizeof(struct 
subset));
for (int v = 0; v < V; ++v) {
subsets[v].parent = v;
subsets[v].rank = 0;
}
while (e < V - 1 && i < 
graph->E) {
struct Edge next_edge = 
graph->edge[i++];
int x = find(subsets, 
next_edge.src);
int y = find(subsets, 
next_edge.dest);
if (x != y) {
result[e++] = 
next_edge;
Union(subsets, x, 
y);
}
}
printf("Following are the edges in the constructed MST\n");
int minimumCost = 0;
for (i = 0; i < e; ++i)
{
printf("%d -- %d == %d\n", result[i].src,result[i].dest, result[i].weight);
minimumCost += result[i].weight;
}
printf("Minimum Cost Spanning tree : %d",minimumCost);
return;
}
int main()
{
int V = 7;
int E = 11;
struct Graph* graph = 
createGraph(V, E);
// add edge A-B
graph->edge[0].src = 0;
graph->edge[0].dest = 1;
graph->edge[0].weight = 1;
// add edge A-C
graph->edge[1].src = 0;
graph->edge[1].dest = 2;
graph->edge[1].weight = 4;
// add edge B-D
graph->edge[2].src = 1;
graph->edge[2].dest = 3;
graph->edge[2].weight = 3;
// add edge B-E
graph->edge[3].src = 1;
graph->edge[3].dest = 4;
graph->edge[3].weight = 6;
// add edge C-D
graph->edge[4].src = 2;
graph->edge[4].dest = 3;
graph->edge[4].weight = 2;
// add edge C-F
graph->edge[5].src = 2;
graph->edge[5].dest = 5;
graph->edge[5].weight = 5;
// add edge D-E
graph->edge[6].src = 3;
graph->edge[6].dest = 4;
graph->edge[6].weight = 2;
// add edge D-F
graph->edge[7].src = 3;
graph->edge[7].dest = 5;
graph->edge[7].weight = 4;
// add edge E-F
graph->edge[8].src = 4;
graph->edge[8].dest = 5;
graph->edge[8].weight = 2;
// add edge E-G
graph->edge[9].src = 4;
graph->edge[9].dest = 6;
graph->edge[9].weight = 7;
// add edge F-G
graph->edge[10].src = 5;
graph->edge[10].dest = 6;
graph->edge[10].weight = 6;
KruskalMST(graph);
return 0;}
