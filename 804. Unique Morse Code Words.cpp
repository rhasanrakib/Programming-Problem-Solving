
#include<bits/stdc++.h>
using namespace std;
int uniqueMorseRepresentations(vector<string>& words) {
    map<char,string>mp;
    vector<string>sym={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    map<string,int>res;
    set<string> :: iterator itr;
    set<string>st;
    for(int i=0;i<26;i++){
        mp[97+i] =sym[i];
    }
    for(int i=0;i<words.size();i++){
        string s= "";
        for(int j=0;j<words[i].length();j++){
            s+= mp[words[i][j]];
        }
        cout<<words[i]<<" code "<<s<<endl;
        st.insert(s);
    }
    int cnt = 0;
    for(itr = st.begin(); itr!= st.end();itr++){
        cnt++;
    }
    return cnt;

}
int main(){
    vector<string>v ={"a"};
    cout<<uniqueMorseRepresentations(v)<<endl;
    return 0;
}
