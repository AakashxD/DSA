#include<iostream>
using namespace std;
int main(){
    int n=7;
    int a[]={3,4,5,6,7,89,8};
    int key=89;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
    return 0;

}