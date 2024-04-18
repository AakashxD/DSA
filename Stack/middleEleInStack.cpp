#include<iostream>
#include<stack>
using namespace std;

void printMid(stack<int> &s,int totalsize){
    if(s.size()==0){
        cout<<"No elemet";
        return;
    }
    if(s.size()==(totalsize/2+1)){
        cout<<"Mid"<<s.top()<<endl;
        return;
    }
    int temp=s.top();
    s.pop();
    // rec call
    printMid(s,totalsize);
    // back
    s.push(temp);

}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    // s.push(30);
    //  s.push(40);
     
    //    s.push(50);
    //     s.push(60);

int totalsize=s.size();
printMid(s,totalsize);
    return 0;
}