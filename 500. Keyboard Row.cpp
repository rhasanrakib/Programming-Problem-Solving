#include<bits/stdc++.h>
using namespace std;


string row1="qwertyuiop";
string row2="asdfghjkl";
string row3="zxcvbnm";
vector<string> findWords(vector<string>& words)
{
    map<char, int>mp;
    vector<string>v;
    for(int i=0;i<row1.length();i++){
        mp[row1[i]]=1;
    }
    for(int i=0;i<row2.length();i++){
        mp[row2[i]]=2;
    }
    for(int i=0;i<row3.length();i++){
        mp[row3[i]]=3;
    }
    for(int i=0;i<words.size();i++){
        char first = mp[tolower(words[i][0])];
        bool flag = true;
        for(int j=0;j<words[i].length();j++){
            if(mp[tolower(words[i][j])] != first){
                flag = false;
                break;
            }
        }
        if(flag){
            v.push_back(words[i]);
        }
    }
    return v;
}
int main()
{
    vector<string>word ={"Hello","Alaska","Dad","Peace"};
    vector<string>res = findWords(word);
    /*for(int i=0;i<word.size();i++){
        cout<<res[i]<<endl;
    }*/

}
