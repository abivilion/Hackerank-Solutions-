#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> vec_name;
    int n,iput;
    cin>>n;
   for (int j=0;j<n;j++ ){
        cin>>iput;
        vec_name.push_back(iput);
    } 
    sort(vec_name.begin(),vec_name.end());
    for(int i=0;i<n;i++)
    {cout<<vec_name[i]<<" ";}
    return 0;
}
