#include<stdio.h>
#define SIZE 100

int queue[SIZE];
int front,rear;

void takeGraph(int adj[SIZE][SIZE], int vertex, int isDirected)
{
    int edges,u,v;
    printf("Enter total number of Edges: ");
    scanf("%d",&edges);
    for(int i=0; i<edges; i++)
    {
        printf("Enter %d Edge(u,v): ",i+1);
        scanf("%d %d",&u,&v);
            adj[u][v] = 1;
        if(!isDirected)
          adj[v][u] = 1;
    }
}

void showGraph(int adj[SIZE][SIZE], int v)
{
    printf("\nGraph is\n");
for(int i=1; i<=v; i++)
    {
        for(int j=1; j<=v; j++)
        {
            printf("%-3d ",adj[i][j]);
        }
        printf("\n");
    }
}
void enqueue(int value)
{
    if(rear == SIZE -1)
    {
        printf("Queue overflow\n");
        return;
    }
    rear = rear+1;
    if(front == -1)
        front = 0;
    queue[rear] = value;
}
int dequeue()
{
    if(front == -1)
        return -1;
    if(front == rear)
    {
        int temp =  queue[front];
        front = rear = -1;
        return temp;
    }
    else
    return queue[front++];
}
int isEmpty()
{
    return front == -1;
}
void BFS(int adj[SIZE][SIZE], int v,int status[], int start)
{
    front = rear = -1;
    enqueue(start);
    while(!isEmpty())
    {
        int u = dequeue();
        status[u] = 2; // visited
        printf("%d, ",u);
        for(int i=1; i<=v; i++)
        {
            if(adj[u][i] == 1)
            {
                if(status[i] == 0)
                {
                    enqueue(i);
                    status[i] = 1; //process
                }
            }
        }
    }
}
int pop(){
    if(top==-1){
        return -1;
    }
    return stack[top--];
}
int main()
{
    int adj[SIZE][SIZE] = {0};
    int status[SIZE] = {0};
    int isDirected;
    int v;
    printf("Enter number of vertex: ");
    scanf("%d",&v);
    printf("Directed/Indirected(1/0):");
    scanf("%d",&isDirected);
    takeGraph(adj,v,isDirected);
    showGraph(adj,v);
    printf("\nBFS of the graph:\n");
    for(int i=1; i<=v; i++)
    {
        if(status[i]==0)
            BFS(adj,v,status,i);
    }
    printf("\n");
    for(int i=1; i<=v; i++)
    {
        printf("%d ",status[i]);
    }
    printf("front=%d, rear = %d",front, rear);
}