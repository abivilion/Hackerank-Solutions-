#include "bits/stdc++.h"
using namespace std;

void multi(int n,vector<int> &ve)
{
    int carry=0;
    for(int i=0;i<ve.size();i++)
    {
        int num=n*ve[i];
        ve[i]=(carry+num)%10;
        carry = (num+carry)/10;
    }
    while(carry)
    {   int er=carry%10;
        ve.push_back(er);
        carry/=10;
    }
}



int main()
{
    int n; cin>>n;
    
    vector<int> ve;
    ve.push_back(1);
    for(int i=2;i<=n;i++)
    {
        multi(i,ve);
    }
    
    reverse(ve.begin(), ve.end());
    
    for(auto itr:ve)
    {
        cout<<itr;
    }    
    
    return 0;
}