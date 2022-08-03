#include<bits/stdc++.h>
using namespace std;

bool wordPattern(string pattern, string s) {

    vector<string>v;
    map<char,string>p;
    map<string,char>sm;
    map<char,string>::iterator itp;
    map<string,char>::iterator its;
    stringstream ss(s);
    string word;
    while (ss >> word) {
        v.push_back(word);
    }
    if(v.size()!=pattern.length())
        return false;
    int len = pattern.length();
    for(int i=0;i<len;i++){
        p[pattern[i]]=v[i];
        sm[v[i]]=pattern[i];
    }
    for(int i=0;i<len;i++){
        if(p[pattern[i]]!= v[i])
            return false;
        if(sm[v[i]]!=pattern[i])
            return false;
    }
    return true;
}

int main()
{
    string pattern,s;
    pattern="aaaa";
    s="dog cat cat dog";

    bool a = wordPattern(pattern,s);
    cout<<a<<endl;
}
