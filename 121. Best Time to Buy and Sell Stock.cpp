
#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    map<int,int>mp;
    map<int,int> smp;
    int sz = prices.size();
    for(int i=0;i<sz;i++){
        mp[i]=prices[i];
    }
    for(int i=0;i<sz;i++){
        mp[i]=prices[i];
    }

}
int main(){
    vector<int> v ={7,1,5,3,6,4};
    cout<<maxProfit(v)<<endl;
}
