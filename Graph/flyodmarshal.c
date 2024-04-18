#define INF 9999
#include<stdio.h>
#define SIZE 100
void takeGraph(int adj[SIZE][SIZE],int v){
    int a,w;
    for(int i=0;i<v;i++){
        do{
            printf("enter the adjecent of %d vertex & weight :",i+1);
            scanf("%d %d",&a,&w);
        }while(1);
    }
}
int main(){
    int adj[SIZE][SIZE]={0};
    int v;
    printf("enter No. of vertex: ");
    scanf("%d",&v);
    takeGraph(adj,v);
}