
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    map<char,int>mp;
    map<char,int> :: iterator itr;
    int longestPalindrome(string s) {
        int len = s.size();

        for(int i=0;i<len;i++){
            mp[s[i]]++;
        }
        int sum = 0;
        int maxx = 0;
        /*for (itr = mp.begin(); itr != mp.end(); ++itr)
        {
            cout<<itr->first<<"  "<<itr->second<<endl;;
        }*/
        bool flag=false;
        for (itr = mp.begin(); itr != mp.end(); ++itr)
        {
            if((itr->second)%2==0){
                sum+=(itr->second);
            }
            else{
               sum+=((itr->second)-1);
               flag = true;
            }
        }

        if(flag) return sum+1;
        else return sum;
    }
};

int main()
{

    Solution s;
    string ss;
    cin>>ss;
    cout<<s.longestPalindrome(ss)<<endl;
}
