#include<bits/stdc++.h>
using namespace std;

string addStrings(string num1, string num2)
{
    int len1 =num1.length();
    int len2 = num2.length();
    if(len1==1 && num1[0]=='0')
    {
        return num2;
    }
    else if(len2==1 && num2[0]=='0')
    {
        return num1;
    }
    int mxLen = len1>len2?len1:len2;
    int mnLen = len1<len2?len1:len2;
    reverse(num1.begin(),num1.end());
    reverse(num2.begin(),num2.end());
    int sum =0;
    int carry=0;
    string addS="";
    for(int i=0; i<mnLen; i++)
    {
        //cout<<num1[i]-'0'<<endl;
        sum = (num1[i]-'0')+(num2[i]-'0')+carry;

        carry=sum/10;
        sum = sum%10;
        addS+=sum+'0';
        //rem=sum;
    }
    if(len1>len2)
    {
        for(int i=mnLen; i<mxLen; i++)
        {
            sum = (num1[i]-'0')+carry;

            carry=sum/10;
            sum = sum%10;
            addS+=sum+'0';
        }
    }
    else if(len2>len1)
    {
        for(int i=mnLen; i<mxLen; i++)
        {
            sum = (num2[i]-'0')+carry;

            carry=sum/10;
            sum = sum%10;
            addS+=sum+'0';
        }
    }


    if(carry) addS+=carry+'0';
    reverse(addS.begin(),addS.end());
    return addS;
}

int main()
{
    string s,ss;
    cin>>s>>ss;
    string su =addStrings(s,ss);
    cout<<su<<endl;
}
