
#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    int testCase,test;
    cin>>testCase;
    while(testCase--){
        cin>>test;
        int arr[test+1];
        int odd =0;
        int even = 0;
        for(int i=0;i<test;i++){
            int num;
            cin>>num;
            arr[i]=num;
            if(num%2==0){
                even++;
            }else{
                odd++;
            }
        }
        cout<<min(even,odd)<<endl;
    }
    return 0;
}
