#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    //vector<int>tn,vector<int>tp;
    map<int,int>tn;
    map<int,int>tp;
    map<int,int>fp;
    map<int,int>fn;
    //map<int,double>mcc;
    //map<int,int>:: iterator r_sum;
    vector<double>mcc;
    int row_col_total=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                tp[i]=arr[i][j];
            }
            fn[i]+=arr[i][j];
            fp[j]+=arr[i][j];
            row_col_total+=arr[i][j];

        }
    }



    cout<<endl;
    cout<<endl;
    cout<<"true positive"<<endl;
    cout<<endl;
    for(int i=0; i<tp.size(); i++)
    {
        cout<<i<<" --> "<<tp[i]<<endl;
    }
    /*for(itr=tp.begin() ;itr!=tp.end(); itr++){
        cout<<itr->first<<" --> "<<itr.second<<endl;
    }*/
    cout<<endl;
    cout<<endl;
    cout<<"False Negative"<<endl;
    cout<<endl;
    for(int i=0; i<fn.size(); i++)
    {
        cout<<i<<" --> "<<fn[i]<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<"False Positive"<<endl;
    cout<<endl;
    for(int i=0; i<fp.size(); i++)
    {
        cout<<i<<" --> "<<fp[i]<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<"True Negative"<<endl;
    cout<<endl;
    for(int i=0; i<n; i++)
    {

        int tn_sum=0;
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(i!=j && i!=k){
                    tn_sum+=arr[j][k];
                }
            }
        }
        tn[i]=tn_sum;
    }
    for(int i=0; i<n; i++)
    {
        cout<<i<<" --> "<<tn[i]<<endl;
    }
    cout<<endl;
    cout<<endl;
    //mcc=((tp[i]*tn[i])-(fp[i]*fn[i]))/ (sqrt((tp[i]+fp[i])*(tp[i]+fn[i])*(tn[i]+fp[i])*(tn[i]*fn[i])))
    for(int i=0; i<n; i++)
    {
        mcc.push_back( ((tp[i]*tn[i])-(fp[i]*fn[i]))/ (sqrt((tp[i]+fp[i])*(tp[i]+fn[i])*(tn[i]+fp[i])*(tn[i]*fn[i]))) );
    }
    cout<<"MCC"<<endl;
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<i<<" --> "<<mcc[i]<<endl;
    }

}
