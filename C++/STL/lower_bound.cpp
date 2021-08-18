#include<bits/stdc++.h>
using namespace std;

int main(){
int n,q;
vector<int> v;
cin>>n;
// getting sorted array
for(int i=0;i<n;i++){
    int umnr;
    cin>> umnr;
    v.push_back(umnr);}
    
    cin>>q;
for(int i=0;i<q;i++){
        int gin;  cin>>gin;
        // cout<<gin;
        
        
        // declaring an iterator IN VECTOR v.
        vector<int>::iterator it_nam;
        it_nam = lower_bound(v.begin(),v.end(),gin);
        
        if(gin!=(*it_nam)){
            cout<<"No "<<(it_nam-v.begin()+1)<<endl;}
        else{cout<<"Yes "<<it_nam-v.begin()+1<<endl;}
}
return 0;
}
