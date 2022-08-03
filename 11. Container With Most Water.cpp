#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l,r,len,mx=0;
        len = height.size();
        l=0;r=len-1;

        while(l<r){

            int res = min(height[l],height[r])*(r-l);
            mx = max(mx,res);
            if(height[l]<=height[r]){
                l++;
            }
            else{
                r--;
            }

        }
        return mx;
    }
};

int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        v.push_back(c);
    }
    Solution s;
    int a =s.maxArea(v);
    cout<<a<<endl;
}
