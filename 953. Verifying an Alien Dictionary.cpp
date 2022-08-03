
#include<bits/stdc++.h>
using namespace std;

bool isAlienSorted(vector<string>& words, string order) {
    map<char,int>mp;
    string ch ="abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<order.size();i++){
        mp[order[i]]= ch[i];
    }
    string cp = "a";
    for(int i=0;i<words.size();i++){
        string s="";
        for(int j=0;j<words[i].length();j++){
            //cout<<mp[words[i][j]]<<endl;
            s+= mp[words[i][j]];
        }
        //cout<<cp<<" "<<s;
        if(cp>s){
            return false;
        }
        else{
            cp=s;
        }
    }
    return true;;

    //return 1;
}
int main()
{
    vector<string>word ={"apple","app"};
    string order = "hlabcdefgijkmnopqrstuvwxyz";
    bool a = isAlienSorted(word,order);
    cout<<a<<endl;

}
