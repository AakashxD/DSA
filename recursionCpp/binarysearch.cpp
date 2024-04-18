#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>& arr,int s,int e,int key)
{
    if(s>e)
    return -1;
    int mid=(s+e)/2;
     if(arr[mid] == key)
     return mid;
     if(arr[mid]<key){
     return binarySearch(arr,mid+1,e,key);
     }
     else{
    return binarySearch(arr,s,mid-1,key);
     }
}
// log(n) complexity
int main(){
    vector<int> v{10,20,70,80,90};
    int n =v.size();
    int key=90;
    int s=0;
    int e=n-1;
    int ans=binarySearch(v,s,e,key);
    cout<<ans;
   return 0;
}