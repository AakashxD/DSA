// divide and conquer
#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void merge(int *arr, int s, int e){

int mid=(s+e)/2;

int len1=mid-s+1;

int len2=e-mid;

int* left=new int[len1];

// dynamic array 
int* right=new int[len2];

int k=s;
for(int i=0;i<len1;i++){
    left[i]=arr[k];
    k++;
}
k=mid+1;
for(int i=0;i<len1;i++){
    right[i]=arr[k];
    k++;
}
int leftIndex=0;
int rightIndex=0;
int mainArray=s;
while(leftIndex< len1 && rightIndex<len2) {
    if(left[leftIndex]<right[rightIndex]){
        arr[mainArray]=left[leftIndex];
        mainArray++;
        leftIndex++;
    }
    else{
        arr[mainArray]=right[leftIndex]; 
        mainArray++;
        rightIndex++;
    }
}
    while(leftIndex<len1){
        arr[mainArray++]=left[leftIndex++];
    }
    while(rightIndex<len2){
        arr[mainArray++]=right[rightIndex++];
    }
}
void mergeSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    // first half
  mergeSort(arr,s,mid);
    // second half
  mergeSort(arr,mid+1,e);
  merge(arr,s,e);
}
int main(){
  int arr[]={1,4,5,7,9,78};
  int n=6;
  int  s=0;
  int e=n-1;
  mergeSort(arr,s,e);
  for(int i=0;i<n;i++){
    cout<< arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}
// first memory stack will be for the stack
