// specific form of recursion.
#include<iostream>
using namespace std;
void printPermutation(string &str, int i){
    if(i>=str.length()){
   cout<<str<<" ";
   return;
}
// swapping
for(int j=i;j<str.length();j++){
    //swap
    swap(str[i],str[j]);
    // rec call
    printPermutation(str,i+1);
    // bactrracking kai liye
     swap(str[i],str[j]);
}
}
int main(){
    string str="abc";
    int i=0;
    printPermutation(str,i);
}