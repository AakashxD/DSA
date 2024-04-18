// top element insert at bottom without using extra space..
#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> &s,int target){
    if(s.empty()){
        s.push(target);
        return ;
    }
    int topEle=s.top();
    s.pop();
    // recursive call
    solve(s,target);
    // backtracing
    s.push(topEle);
}
void insertAtBottom(stack<int> &s){
    if(s.empty()){
        cout<<"CANT INSERT AT BOTTOM";
        return ;
    }
    int target=s.top();
    s.pop();
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
        insertAtBottom(s);
        cout<<" hello"<<endl;
        while(!s.empty()){
            cout<<s.top()<<endl;
            s.pop();
        }

}