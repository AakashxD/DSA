#include<iostream>
// if we pass already sorted element it also take the same time so we can modify bubble sort that it will continue the process if at least one swap occur other wise stop the process.
using namespace std;
void show(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}
void BubbleSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int flag=0;
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            } 
             show(arr,7);
             cout<<endl;
        }
    }
}
int main(){
    int arr[]={9,8,7,5,4,4,3};
    int size=7;
    BubbleSort(arr,7);
    show(arr,7);
}
