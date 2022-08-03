#include<bits/stdc++.h>
using namespace std;
string shortestCompletingWord(string licensePlate, vector<string>& words) {
    int len = licensePlate.length();
    map<char,int>mp;

    for(int i=0;i<len;i++){
        if((licensePlate[i]>='A' && licensePlate[i]<='Z') || (licensePlate[i]>='a' && licensePlate[i]<='z')){
           mp[tolower(licensePlate[i])]++;
        }
    }
    int sz = words.size();
    int mnln =99999;
    string mn="";
    for(int i=0; i<sz; i++){
        map<char,int>temp = mp;
        map<char,int> :: iterator iter;
        for(int j=0; j<words[i].length();j++){

            if(temp[words[i][j]]){
                temp[words[i][j]]--;
            }
        }
        bool flag = true;
        for(iter = temp.begin(); iter != temp.end(); iter++){
            if(iter->second !=0){
                flag = false;
                break;
            }
        }
        if(flag && words[i].length()<mnln){
            mnln = words[i].length();
            mn = words[i];

        }
    }
    return mn;
}

int main()
{
    string licensePlate = "1s3 456";
    vector<string> words = {"looks","pest","stew","show"};
    cout<<shortestCompletingWord(licensePlate,words)<<endl;
}
