#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
// s.find(part) = location
// daabsbaabcbc
int removeOccurence(string& s,string& part){
    int found=s.find(part);
    if(found!= string::npos){
        string left_part=s.substr(0,found);
        string right_part=s.substr(found+ part.size(),s.size());
        s=left_part+right_part;

       return removeOccurence(s,part);
    }
}
int main()
{  string s;
   cin>>s;
   string part;
   cin>>part;
   cout<<removeOccurence(s,part);
}