                                                            #include<bits/stdc++.h>
using namespace std;

int main()
{

    map<char,char>mps;
    map<char,char>mpt;

    string s = "egg";
    string t = "add";
    int len = s.length();

    for(int i=0;i<len;i++){
        mps[s[i]] = t[i];
        mpt[t[i]] = s[i];
    }
    for(int i=0;i<t.length();i++){

        if(mps[s[i]]!=t[i] || mpt[t[i]]!=s[i]){
            cout<<"False"<<endl;
            break;
        }
        //cout<<mps[s[i]]<<endl;
    }
    cout<<"true"<<endl;
    //return true;
}
