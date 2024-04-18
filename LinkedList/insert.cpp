#include<iostream>
using namespace std;
void insertHeap(int *arr,int n, int value){
    n=n+1;
    arr[n]=value;
    int i=n;
    while(i>=1){
        int parent=i/2;
        if(arr[i]>arr[parent]){
            swap(arr[i],arr[parent]);
            i=parent;
        }
        else{
            break;
        }
    }
}
int main(){
  int  arr[]={10,34,2,56,34,56};
   int n=6;
   insertHeap(arr,n,66);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
   }
}//11 6 8 19 4  10 5 17 43 49 21