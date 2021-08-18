#include<bits/stdc++.h>
using namespace std;

int main(){
    int q,demand,mat;
    set<int> s;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>demand;
        if(demand==1){
            cin>>mat;
            s.insert(mat);
        }
        else if(demand==2){
            cin>>mat;
            s.erase(mat);
        }
        else {
            cin>>mat;
            if(s.find(mat)==s.end()){
                cout<<"No"<<endl;
            }        
            else{cout<<"Yes"<<endl;}
            }
            
    }
    return 0;
}
