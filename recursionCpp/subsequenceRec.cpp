#include<iostream>
using namespace std;
void subSequence(string str,string output,int i){
    if(i>=str.length())  {
        cout<<output<<endl;
        return;
    }
        // exclude
        subSequence(str,output,i+1);
        // include
        output.push_back(str[i]);
        subSequence(str,output,i+1);
    }
  
  
int main(){
  string str="abc";
  string output ="";
  int i=0;
subSequence(str,output,i);
}