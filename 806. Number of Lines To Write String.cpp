
#include<bits/stdc++.h>
using namespace std;
vector<int> numberOfLines(vector<int>& widths, string s) {
    int len = s.length();
    int line = 0;
    int pix=0;
    for(int i=0;i<len;i++){
        if(pix+widths[s[i]-97]>100){
            line++;
            pix = 0;
        }
        pix+=widths[s[i]-97];
    }
    return {++line,pix};
}


int main(){
    vector<int> widths = {10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};
    string s = "aaaaaaaaaa";
    vector<int>v = numberOfLines(widths,s);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}
