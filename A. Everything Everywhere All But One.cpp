
#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    int testCase,test;
    cin>>testCase;
    while(testCase--){
        cin>>test;
        int arr[test+1];
        int total =0;
        for(int i=0;i<test;i++){
            int num;
            cin>>num;
            arr[i]=num;
            total+=num;
        }
        bool flg = false;
        for(int i=0; i<test;i++){
            int nsumc = ceil((total-arr[i])*1.0/(test-1)*1.0);
            int nsumf = floor((total-arr[i])*1.0/(test-1)*1.0);
            if(nsumc == arr[i] && nsumc == nsumf){
                cout<<"YES"<<endl;
                flg = true;
                break;
            }
        }
        if(!flg){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
