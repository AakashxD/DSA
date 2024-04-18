// Insertion sort can be applied for a small list of almost sorted array
#include<iostream>
using namespace std;
void insertionSort(int arr[], int size){
    for(int i=0;i<size;i++){
        int temp=arr[i];
         int j=i-1;
        while(j>=0 && temp<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}