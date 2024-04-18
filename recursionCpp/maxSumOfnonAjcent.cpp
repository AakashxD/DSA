#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int solve(vector<int>& arr,int i,int sum,int &maxi){
    if(i>=arr.size())
    {
        maxi=max(sum.maxi);
        return maxi;
    }
    //include
    solve(arr,i+2,sum+arr[i],maxi);
    //exlcude
    solve(arr,i+1,sum,maxi);
}
int main(){
   vector<int> arr{1,2,4,9};
   int sum=0;
   int maxi=INT_MIN;
}