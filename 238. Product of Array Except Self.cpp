
#include<bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
    int qp=1;
    vector<int>v;
    for(int i=0;i<nums.size();i++){
        qp*=nums[i];
        v.push_back(qp);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}

int main(){
    vector<int>nums = {1,2,3,4};
    productExceptSelf(nums);
}
