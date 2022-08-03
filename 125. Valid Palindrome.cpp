#include<bits/stdc++.h>
using namespace std;

bool func(string s)
{
    int len = s.length();
    int i =0;
    int j = len-1;
    while(i<j)
    {
        char chi,chj;
        chi = s[i];
        chj=s[j];

        if(!((chi>=65 && chi<=90) ||(chi>=97 && chi<=122)||(chi>=48 && chi<=57)))
        {
            i++;
            continue;
        }
        if(!((chj>=65 && chj<=90) ||(chj>=97 && chj<=122) || (chj>=48 && chj<=57)))
        {
            j--;
            continue;
        }
        if(chi>=65 && chi<=90)
        {
            chi = chi+32;
        }
        if(chj>=65 && chj<=90)
        {
            chj = chj+32;
        }
        if(chi != chj){
            return false;
        }
        i++;j--;
    }
    return true;
}

int main()
{
    string s="0p";
    cout<<func(s)<<endl;
}
