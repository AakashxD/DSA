// coin change  problem 
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int solveCoin(vector<int>& arr,int target){
    if(target==0){
    return 0;
    }
    if(target<0)
    {
    return INT_MAX;
    // agar mera anser int max aaya mtlb invalid thing; 
    }
    int mini=INT_MAX;
    for(int i=0;i<arr.size();i++)
    {
        int ans=solveCoin(arr,target-arr[i]);
    
        if(ans!=INT_MAX){
        mini=min(mini,ans+1);
        }  
    }
     return mini;    
}
int main()
{   int target=7;
    vector<int> arr{1,2,3};
    cout<<"print ans\n";
    int ans=solveCoin(arr,target);
    cout<<ans;
    return 0;
}