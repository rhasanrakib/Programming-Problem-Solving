
#include<bits/stdc++.h>
using namespace std;

vector<int> shortestToChar(string s, char c) {
    vector<int>indx;
    vector<int>result;
    for(int i=0;i<s.length();i++){
            result.push_back(0);
    }
    for(int i=0;i<s.length();i++){
        if(s[i]==c){
            indx.push_back(i+1);
        }
    }

    if(indx.size() == s.length()){

        return result;
    }
    int i=0,j=s.length()-1;

    while(i<=j){

        int mni = 9999999;
        int mnj = 9999999;
        for(int k=0;k<indx.size();k++){
            int diffi = (indx[k]-(i+1)) < 0 ? (indx[k]-(i+1))*-1 : (indx[k]-(i+1));
            int diffj = (indx[k]-(j+1)) < 0 ? (indx[k]-(j+1))*-1 : (indx[k]-(j+1));
            mni = min(mni,diffi);
            mnj = min(mnj,diffj);
        }
        result[i]=mni;
        result[j]=mnj;
        i++;
        j--;
    }
    return result;
}

int main(){
    string s = "vmokg";
    char c = 'm';
    vector<int> v = shortestToChar(s,c);
    for(int i=0; i< v.size();i++){
        cout<<v[i]<<endl;
    }
}
