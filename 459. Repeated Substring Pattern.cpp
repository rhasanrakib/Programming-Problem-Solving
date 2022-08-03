#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        int len = s.size();
        if(len==1){
            return true;
        }
        if(len==2 && s[0] == s[1]){
            return true;
        }
        else{
            return false;
        }
        int i=0,j=1;
        while(j<len){

        }
    }
};
int main()
{
    while(1)
    {
        string s;
        cin>>s;

        Solution sol;
        bool a = sol.repeatedSubstringPattern(s);
        cout<<"ans "<<a<<endl;
    }

}
