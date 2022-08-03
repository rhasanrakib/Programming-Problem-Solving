
#include<bits/stdc++.h>
using namespace std;

vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string,int>mp;
        map<string,int>res;
        map<string,int> :: iterator itr;
        vector<string> v1;
        int sum = 0;
        int mn = 999999;
        for(int i=0;i<list1.size();i++){
            mp[list1[i]]=i;
        }
        for(int i=0; i<list2.size();i++){


            if(mp.count(list2[i])){

                mn = min(mn,(mp[list2[i]]+i));
                res[list2[i]]=mp[list2[i]]+i;
            }

        }
        for(itr = res.begin();itr != res.end(); itr++){
            if(itr->second == mn){
                v1.push_back(itr->first);
            }

        }
        return v1;

}
int main(){
    //freopen("input.txt", "r", stdin);
    vector<string>v1,v2;
    v1 = {"Shogun","Tapioca Express","Burger King","KFC"};
    v2= {"KFC","Shogun","Burger King"};

    vector<string> sol = findRestaurant(v1,v2);
    for(int i=0;i<sol.size();i++){
        cout<<sol[i]<<endl;
    }
}
