// rat in a maze
#include<iostream> //visited marked
#include<vector>
using namespace std;

void solveMaze(int arr[3][3],int row,int col,int x,int j,
 vector<vector<bool> >&visited, vector<string>& path,string output){
    // base
    if(i==row-1 && j==col-1){
        // answer found
        path.push_back(output);
        return ;
    }
    // down ->i+1,j
    if(isSafe(i+1,j,row,col,arr,visited))
       
 }

















int main(){
    int maze[][]={
        {1,0,0},
        {1,1,0},
        {1,1,1}};

        int row=3;
        int col=3;
        vector<vector<bool> > visited(row,vector<bool>(col,false));
        visited[0][0]=true;
        vector<string> oath;
        string output="";
        solveMaze(arr,row,col,0,0,visitedm path, output);

}