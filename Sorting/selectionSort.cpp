#include<iostream>
using namespace std;
void show(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}
void SelectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<=size;i++){
           if(arr[min]>arr[j])
           min=j;
        }
        swap(arr[i],arr[min]);
    }
    show(arr,7);
}
int main(){
    int arr[]={9,8,7,5,4,4,3};
    int size=7;
    SelectionSort(arr,7);
    
}
