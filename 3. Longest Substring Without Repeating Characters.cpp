#include<bits/stdc++.h>
using namespace std;


class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int mx=0;
        int len = s.size();
        //cout<<len<<endl;
        int l=0,r=l+1;
        int lastIndx[96];
        int arr[96];
        if(len==0)
        {
            return 0;
        }
        else if(len==1)
        {
            return 1;
        }
        for(int i=0; i<96; i++)
        {
            arr[i]=0;
            lastIndx[i]=-1;
        }
        arr[s[0]-32]=1;
        lastIndx[s[0]-32]=0;
        int lenCnt=0;
        while(l<r && r<len)
        {
            if(s[r]<'a' || s[r]>'z')
            {
                r++;
                continue;
            }
            if(arr[s[r]-32]>0 )
            {
                //cout<<s[r]<<endl;
                //cout<<l<<"  "<<r<<endl;
                mx = max(mx,lenCnt);
                lenCnt=0;

                //cout<<mx<<endl;
                l = lastIndx[s[r]-32]+1;
                lastIndx[s[r]-32]=r;
                arr[s[0]-32]=0;
            }
            if(r==len-1)
            {
             mx = max(mx,lenCnt);
                /*if(arr[s[r]-32]>0 )
                {
                    //cout<<s[r]<<endl;
                    //cout<<l<<"  "<<r<<endl;
                    mx = max(mx,lenCnt);
                    lenCnt=0;
                    //cout<<mx<<endl;
                    l = lastIndx[s[r]-32]+1;
                    lastIndx[s[r]-32]=r;
                    arr[s[0]-32]=0;
                }
                else
                {
                    mx = max(mx,lenCnt);
                }*/
            }
            else
            {
                lenCnt++;
                lastIndx[s[r]-32]=r;
                arr[s[r]-32]=1;

            }
            r++;
        }
        if(mx==0)return len;
        //cout<<mx<<endl;
        return mx;
    }
};


int main()
{
    while(1)
    {
        string s;
        cin>>s;

        Solution sol;
        int a = sol.lengthOfLongestSubstring(s);
        cout<<"ans "<<a<<endl;
    }

}
