#include<iostream>
// remove all the occurence of a form string s ="abcax"
using namespace std;
string f(string &s,int idx,int n){
    if(idx==n){
        return "";
    }
     string curr="";
     curr+=s[idx];
     return ((s[idx]=='a')?"":curr)+ f(s,idx+1,n);
}
int main(){
    string s="abcax";
    int n=5;
   string ans= f(s,0,n);
   cout<<ans;
     return 0;
}