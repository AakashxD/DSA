#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> &s,int target){
    if(s.empty()){
        s.push(target);
        return ;
    // insert at bottom
    }
    int topEle=s.top();
    s.pop();
    // recursive call
    solve(s,target);
    // backtracing
    s.push(topEle);
   
}
void reverse(stack<int> s){
  if(s.empty()){
    return ;
  }
  int target=s.top();
  s.pop();
  // reverse stack
   reverse(s); 
   // insert at bottom target ko
   solve(s,target);

}
int main(){
stack<int> s;
  s.push(10);
   s.push(20);
    s.push(30);
     s.push(40);
       s.push(50);
        s.push(60);
        reverse(s);
        cout<<" hello"<<endl;
        while(!s.empty()){
            cout<<s.top()<<endl;
            s.pop();
        }

}
