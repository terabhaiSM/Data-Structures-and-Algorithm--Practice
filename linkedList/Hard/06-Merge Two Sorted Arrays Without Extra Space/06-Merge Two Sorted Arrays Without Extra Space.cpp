#include<vector>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
    vector<long long> ans;
    int n=a.size(),m=b.size();
    for(int k=0;k<n+m;k++)
    {
        if(k<n)
        {
            ans.push_back(a[k]);
        }
        if(k<m)
        {
            ans.push_back(b[k]);
        }
    }
    sort(ans.begin(),ans.end());
    int i=0,j=0;
    while(i<n)
    {
        a[i]=ans[i];
        i++;
    }
    while(j<m)
    {
        b[j]=ans[j+i];
        j++;
    }
}