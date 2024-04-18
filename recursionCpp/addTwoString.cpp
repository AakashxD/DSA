#include<iostream>
using namespace std;


string addRE(string num1,int p1,string num2,int p2,int carry=0){
if(p1<0 && p2<0){
    
 if(carry!=0){
    return string(1,carry+'0');
 }
 return "";
}
 
 
   int n1=(p1>=0 ? num[p1]: '0')-'0';
    int n2=(p2>=0 ? num[p1]: '0')-'0';
    int csum=n1+n2+carry;
    int digit=csum%10;
    carry=csum/10;
    string ans="";
}
int main(){

}