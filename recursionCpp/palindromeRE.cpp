#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
bool palindrome(string& s,int start,int end){
 if(start>=end)
 return true;
if(s[start]!=s[end])
return false;

  return palindrome(s,start+1,end-1);

}
int main(){
  string s;
  cin>>s;
  int n=s.size()-1;
  cout<<palindrome(s,0,n)<<endl;
}