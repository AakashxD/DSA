#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int rob(vector<int> &nums,int i){
    if(i>=nums.size())
    return 0;

    // lutuga
    int robAmount1=nums[i]+rob(nums,i+2);
     // nhi lutuga
    int robAmt2=0+rob(nums,i+1);
      
    return max(robAmount1,robAmt2);     
}
int main(){
    vector<int> nums{1,2,2,1};
    int i=0;
    rob(nums,i);
}