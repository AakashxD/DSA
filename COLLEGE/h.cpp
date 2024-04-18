#include <bits/stdc++.h>
using namespace std;
void display(auto lst){
    for(auto x:lst)
    cout<<x<<" ";
}
int main()
{
   array<int, 5> arr={2,3,4,5,6};
    swap(arr.front(),arr.back());
     int sum=0;
    for(int x:arr){
      sum=sum+x;
    }
    sum=sum/5;
    cout<<sum;
 list<int> lst={1,2,3,4,5};
//    display(lst);
  for(auto x:lst){
    cout<<x<<"-->";
                  }
  cout<<"NULL"<<endl;
  lst.push_back(39);
//   display(lst);
   
    lst.remove(4);
    display(lst);
     return 0;
}