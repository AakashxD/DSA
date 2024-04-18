#include<bits/stdc++.h>
using namespace std;

int main()
{
    array<int,10>arr={1,2,3,4,5};
    for(auto x:arr)
    cout<<x<<endl;
    cout<<arr[1]<<" "<<arr.at(1)<<endl;
    cout<<arr.size()<<endl;
    return 0;

}