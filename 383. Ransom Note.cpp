#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ransomNote="b";
    string magazine="a";
    map<char,int>mp;

    int magazineLen = magazine.length();
    for(int i=0; i<magazineLen; i++)
    {
        mp[magazine[i]]++ ;
    }
    int ransomLen = ransomNote.length();

    for(int i=0;i<ransomLen;i++){
        if(!mp[ransomNote[i]]){
            break;
        }
        else{
            mp[ransomNote[i]]--;
        }
    }

}
