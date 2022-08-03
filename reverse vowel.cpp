#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "aA";

    int len= s.length();
    int j= len-1;
    int f1=-1,f2=-1,i=0;
    int loop = len/2;
    while(i<j){
        if(s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i] =='o' ||s[i]=='u' || s[i]=='A' || s[i]=='E' ||s[i]=='I' || s[i] =='O' ||s[i]=='U' ){
                f1=i;
        }
        else{
            i++;
        }
        if(s[j]=='a' || s[j]=='e' ||s[j]=='i' || s[j] =='o' ||s[j]=='u' || s[j]=='A' || s[j]=='E' ||s[j]=='I' || s[j] =='O' ||s[j]=='U'){
                f2=j;
        }
        else{
            j--;
        }
        cout<<s[f1]<<s[f2]<<endl;
        if(f1!=-1 && f2!=-1){
            swap(s[f1],s[f2]);
            f1=-1;f2=-1;
            i++;j--;
        }
    }
    cout<<s<<endl;
}
