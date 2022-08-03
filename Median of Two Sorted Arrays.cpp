#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int>nums1, vector<int>nums2)
    {
        int m = nums1.size();
        int n = nums2.size();
        int c[m+n];
        int i=0;
        int j=0;
        int k=0;
        if(m==0 && n==0)
        {
            return 0;
        }
        if(m==0)
        {
            int mid = 0;
            if(n%2==0)
            {
                mid = n/2;
                return (nums2[mid-1]+nums2[mid])/2.0;
            }
            else
            {
                mid = n+1/2;
                return nums2[mid-1]*1.0;
            }

        }
        if(n==0)
        {
            int mid = 0;
            if(m%2==0)
            {
                mid = m/2;
                return (nums1[mid-1]+nums1[mid])/2.0;
            }
            else
            {
                mid = m+1/2;
                return nums1[mid-1]*1.0;
            }

        }
        while(1)
        {
            if(i>=m || j>=n)
            {
                break;
            }

            if(nums1[i]<nums2[j])
            {
                c[k++]= nums1[i++];
            }
            else if(nums1[i]> nums2[j])
            {
                c[k++] = nums2[j++];
            }
            else if(nums1[i]==nums2[j])
            {
                c[k++]=nums1[i++];
            }

        }
        while(i<m)
        {
            c[k++]=nums1[i++];
        }
        while(j<n)
        {
            c[k++]=nums2[j++];
        }
        for(int i=0;i<k;i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;

        int mid = 0;
        cout<<k<<endl;
        if(k%2==0)
        {
            mid = k/2;
            return (c[mid-1]+c[mid])/2.0;
        }
        else
        {
            mid = (k+1)/2;
            return c[mid-1]*1.0;
        }
    }
};

int main()
{
    vector<int>v1,v2;
    int m,n;
    cin>>m>>n;
    for(int i=0; i<m; i++)
    {
        int inp;
        cin>>inp;
        v1.push_back(inp);
    }
    for(int i=0; i<n; i++)
    {
        int inp;
        cin>>inp;
        v2.push_back(inp);
    }
    Solution sol;
    double ans = sol.findMedianSortedArrays(v1,v2);
    cout<<ans<<endl;
}
