#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0){
            return 0;
        }
        int lenH = haystack.size();
        int lenN = needle.size();
        int i=0,j=0;
        while(i<lenH){

            if(haystack[i]==needle[j]){
                j++;
                i++;
                if(j== lenN){
                    return i-lenN;
                }

            }
            else{
                i=i-j+1;
                j=0;

            }
        }
        return -1;
    }
};

int main()
{

    Solution sol;
    string haystack,needle;
    cin>>haystack>>needle;
    cout<<sol.strStr(haystack,needle)<<endl;

}
