#include<iostream>
#include<limits>

using namespace std;
void partition(int arr[],int low,int high){
     int pivot=arr[low];
     int i=low+1;
     int j=high;
        
}
void quicksort(int arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);
    quicksort(arr, low, pi - 1);
    quicksort(arr, pi + 1, high);
  }
}
int main(){

}