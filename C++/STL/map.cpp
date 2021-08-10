#include<bits/stdc++.h>
using namespace std;

int main(){
    int qu_num,dea;
    string one;
    int tot=0;
    
    map<string,int>m;
    cin>>qu_num;
    
    
    for(int i(0),mark;i<qu_num;i++){
        
        cin>>dea>>one;
        
        if(dea==1){
            cin>>mark;
            // int two;cin>>two;
            m[one] += mark;
        }
        else if(dea==2){
            m.erase(one);
        }
        else{
            
            
           cout<<m[one]<<endl;
            
        }
       
    }
    // cout<<tot;
    return 0;
}
