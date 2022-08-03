
#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    string s = strs[0];
    string ss ="";
    int mx = 99999;
    int sz = strs.size();
    if(sz == 1){
        return strs[0];
    }
    for(int i=1;i<sz;i++){
        ss+=strs[i]+"#";
    }
    int len = ss.length();
    int j=0;
    int cnt = 0;
    int thisWord = true;
    for(int i=0;i<len;i++){
        if(ss[i]== '#'){
            j=0;
            thisWord=true;
        }
        else{
            if(ss[i] == s[j] && thisWord){
                cnt++;
                j++;

            }
            else{
                if(thisWord){
                    mx = min(mx,cnt);
                    cnt=0;
                    thisWord=false;
                    j=0;
                }
            }

        }
    }
    cout<<mx<<endl;
    string sss="";
    for(int i=0;i<mx;i++){
        sss+=ss[i];
    }
    return sss;
}

int main(){
    vector<string>v = {"flower","flow","flight"};
    string a = longestCommonPrefix(v);
    cout<<a<<endl;
}
