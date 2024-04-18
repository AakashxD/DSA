// divide n conquer
// a problrm is divivded into some problem and we divivded thhat problem to find that fulll soln
// we can use recursion to solve sub problem with help of base case combine all this soln to gain solution.
// naam chote kam bde
// to find its position we will compare the value of pivot element to all the element from array/list in such a way that all the smaller no. moved to its left side and all the larger no. move to right side to do this we ahve to follow a parition algo on the bases of will divide the list into 2 part the partition return its position 
// 10,16,8,12,15,6,9,5,1/0
#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int  partition(int arr[],int s,int e){
   // choose pivot element
   int pivotIndex=s;
   int pivotElement =arr[s];
   int count=0;
   // step 2 position 
   for(int i=s+1;i<=e;i++){
    if(arr[i]<=pivotElement){
      count++;
    }
   }
   // place at right position 
   int rightIndex=s+count;
   swap(arr[rightIndex],arr[pivotIndex]);
   pivotIndex=rightIndex;
   // left mai chotee and right mai bdee
   int i=s;
   int j=e;
   while(i<pivotIndex && j>pivotIndex){
      while(arr[i]<=pivotElement){
        i++;
      }
      while(arr[j]>pivotElement){
        j--;
      }
      //  if we got 2 elements which is at its wrong posistion then swap
      if(i<pivotIndex && j>pivotIndex)
      {
    swap(arr[i],arr[j]);
      }    
   }
   return pivotIndex;
}
void quickSort(int arr[],int s,int e){
    if(s>=e)
    return ;
    // partition
    int p=partition(arr,s,e);
    // rec
    //pivot for left
    quickSort(arr,s,p-1);

    // pivot for right
    quickSort(arr,p+1,e);

}
int main(){
  int arr[]={8,1,20,30,6,5,60,5};
  int n=8;
  int s=0;
  int e=n-1;
  quickSort(arr,s,e);
  for( int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
// case 1-> the partition elemts will return allways return middle position so in every pass will be divided into 2 equal parts until the low is less than height so lets assume after k pass it will be(l>=h) 
// for n number first pass will ne N/2
// second pass..to.. n/2^n...
// now we find value of k n=2^k then k=logn(base 2) overall complex nlogn this is the best case for Quick sort
// this best case is not posible
// case->2
// Assume the give no. is in accending order.
// in thius case the comparsiom
// select middle  elemts as pivot elment in the array.
// select a random pivot elemts 
// for best case it will logn of stack size worst  case n.