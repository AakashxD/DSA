#include<iostream>
#include<vector>
using namespace std;
bool checkSorting(vector<int> &arr,int&  n,int i)
{
    if(i==n-1)
    return true;
    if(arr[i]>arr[i+1])
    return false;
    return checkSorting(arr,n,i+1);    
}
int main(){
    vector<int> v{10,20,30,4,50};
    int n=v.size();
    int i=0;
    bool isSorted=checkSorting(v,n,i);
    if(isSorted){
       cout<<"array is sorted";
    }
    else
    cout<<"array not sorted";
}
