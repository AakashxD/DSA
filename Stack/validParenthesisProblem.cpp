#include<iostream>
#include<stack>
using namespace std;

bool isValid(string str){
    stack<char> s;
    for(char ch : str){
        if(ch=='(' || ch=='{' || ch=='['){
            s.push(ch);
        }
        else{
            if(!s.empty()){
                char topCh = s.top();
                if((ch==')' && topCh=='(') || (ch=='}' && topCh=='{') || (ch==']' && topCh=='[')){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    return s.empty();
}

int main(){
    string str = "(){}";
    if(isValid(str)){
        cout << "Valid" << endl;
    }
    else{
        cout << "Not Valid" << endl;
    }
    return 0;
}
