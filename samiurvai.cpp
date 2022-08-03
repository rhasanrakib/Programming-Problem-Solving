#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    map<int,int>mp;

    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    for(int i=0;i<n;i++){
        v[i] = mp[v[i]];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }

}
