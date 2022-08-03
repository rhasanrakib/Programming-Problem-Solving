
#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s = "aeiouaeio";

    map<char,int>mp;

    int len = s.length();
    for(int i=0;i<len;i++){

        mp[s[i]]++;

    }

    for(int i=0;i<len;i++){
        if(mp[s[i]]==1){
            return i+1;
        }
    }

}
