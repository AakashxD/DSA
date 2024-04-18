#include <stdio.h>
#define SIZE 100

int stack[SIZE];
int top;

void takeGraph(int adj[SIZE][SIZE], int v, int isDirected)
{
  int edges, u;
  printf("Enter total number of Edges: ");
  scanf("%d", &edges);
  for (int i = 0; i < edges; i++)
  {
    printf("Enter %d Edge(u,v): ", i + 1);
    scanf("%d %d", &u, &v);
    adj[u][v] = 1;
    if (!isDirected)
      adj[v][u] = 1;
  }
}

void showGraph(int adj[SIZE][SIZE], int v)
{
  printf("\nGraph is\n");
  for (int i = 1; i <= v; i++)
  {
    for (int j = 1; j <= v; j++)
    {
      printf("%-3d ", adj[i][j]);
    }
    printf("\n");
  }
}
void push(int value)
{
  if (top == SIZE - 1)
  {
    printf("stack overflow\n");
    return;
  }
  top++;
  stack[top] = value;
}
int pop()
{
  if (top == -1)
    return -1;
  return stack[top--];
}
int isEmpty()
{
  return top == -1;
}
void DFS(int adj[SIZE][SIZE], int v, int status[], int start)
{
  top = -1;
  push(start);
  status[start] = 1;
  // as start vertex is visited therefore its status will be 1
  while (!isEmpty())
  {
    int u = pop();
    status[u] = 2; // visited
    printf("%d, ", u);
    // check adjacent vertex of u
    for (int i = 1; i <= v; i++)
    {
      if (adj[u][i] == 1)
      {
        if (status[i] == 0)
        {
          push(i);
          status[i] = 1; // 1 represent vertex under process
        }
      }
    }
  }
}
int main()
{
  int adj[SIZE][SIZE] = {0};
  int status[SIZE] = {0};
  int isDirected;
  int v;
  printf("Enter number of vertex: ");
  scanf("%d", &v);
  printf("Directed/Indirected(1/0):");
  scanf("%d", &isDirected);
  takeGraph(adj, v, isDirected);
  showGraph(adj, v);
  printf("\nDFS of the graph:\n");
  for (int i = 1; i <= v; i++)
  {
    if (status[i] == 0)
      DFS(adj, v, status, i);
  }

}