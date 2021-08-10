#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> ve;
    for(int j=0;j<n;j++){
        int kn;
        cin>>kn;
       ve.push_back(kn); 
    }
    int del,delr,dels;
    cin>>del>>delr>>dels;
    
    // specific removing 
    ve.erase(ve.begin()+(del-1));
    
    ve.erase(ve.begin()+(delr-1),ve.begin()+(dels-1));
    cout<<ve.size()<<endl;
    //range removing
    for(int i=0;i<ve.size();i++){cout<<ve[i]<<" ";}
    return 0;
    
}
w