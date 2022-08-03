#include<bits/stdc++.h>
using namespace std;

int main(){
    string s ="rat";
    string t ="cat";
    map<char,int>mp;
    map<char,int>::iterator itr;
    int len = s.length();
    for(int i=0;i<len;i++){
        mp[s[i]]++;
    }
    int lent= t.length();
    for(int i=0;i<lent;i++){
        if(!mp[t[i]]){
            //return false;
            cout<<"false"<<endl;
            break;
        }
        mp[t[i]]--;
    }
    for(itr=mp.begin();itr!=mp.end();itr++){
        if(itr->second){
            //return false;
            cout<<"false"<<endl;
            break;
        }
    }
    //return true;
    cout<<"true"<<endl;
}
