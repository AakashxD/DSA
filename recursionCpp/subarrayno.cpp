#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void subArray(vector<int> &nums,int start, int end){
  if(end==nums.size())
  return;

    for(int i=start;i<=end;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    subArray(nums,start,end+1);   
}
void improve(vector<int> &nums){
  for( int start=0;start<nums.size();start++)
  {
   int end=start;
   // 3  34
   subArray(nums,start,end);
}
}
int main(){
  vector<int> nums{1,2,3,4,5};
  improve(nums);
  
}