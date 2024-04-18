#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void maxProfitFinder(vector<int> &price,int i,int &minPrice,int &maxProfit){
    if(i==price.size())
    //// itrative solve this; leetcode pai solve kro
    return;


    if(price[i]<minPrice){
        minPrice=price[i];  
    }
    int todaysProfit=price[i]-minPrice;
    if(todaysProfit > maxProfit)
    {
        maxProfit=todaysProfit;
    }
    maxProfitFinder(price,i+1,minPrice,maxProfit);
}
int maxProfitChecker(vector<int> &price){
    int minPrice=INT_MAX;
    int maxProfit=INT_MIN;
    maxProfitFinder(price,0,minPrice,maxProfit);
    return maxProfit;

    
}
int main(){
   vector<int> prices{7,1,5,3,6,4};
}