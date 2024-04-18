// LIFO type of ds
// stacks cpp reference 
#include<iostream>
#include<stack>
using namespace std;
int main(){
    // creation   
    stack<int> st;
    st.push(10);
st.push(90);
st.push(100);
st.push(710);
// remove
st.pop();
// check elemnet on top
cout<<"element in top list"<< st.top();
// size
cout<<"size of stack"<<st.size()<<endl;

}
