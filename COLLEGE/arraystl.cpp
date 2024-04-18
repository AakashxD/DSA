#include <bits/stdc++.h>
using namespace std;
int main()
{
    // array<int, 5> arr = {2, 3, 4, 5,1};
    // cout << arr[2];
    // arr[3] = 20;
    // for (auto x : arr)
    // {
    //     cout << x << endl;
    // }
    // cout<<arr.front()<<endl;
    // string s="hello";
    // for(char x:s)
    // {
    //  cout<<x<<endl;
    // }
    // sort(arr.begin(),arr.end());
    //  for (auto x : arr)
    // {
    //     cout << x << endl;
    // }
    // return 0;
   array<int, 5> arr;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    swap(arr.begin(),arr.end());
     int sum=0;
    for(int x:arr){
      sum=sum+x;

    }
    sum=sum/5;
    cout<<sum;
}