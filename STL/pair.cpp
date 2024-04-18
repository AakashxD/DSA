#include<bits/stdc++.h>
using namespace std;
void display(list<int> lst){
    for(int x:lst){
        cout<<x<<"-->";
    }
    cout<<"NULL"<<endl;
}
int main(){
    list<int>lst={1,2,3,4,5};
    display(lst);
    lst.push_back(6);
    lst.push_front(0);
    display(lst);
    lst.pop_back();
    lst.pop_front();
    lst.remove(4);
    display(lst);
    auto a=find(lst.begin(),lst.end(),3);
    advance(a,2);
    lst.insert(a,20);
    lst.reverse();
    display(lst);
    lst.sort();
    display(lst);
    lst.erase(a);
    return 0;
}