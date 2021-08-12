
    #include<bits/stdc++.h>
    using namespace std;
    #define pb push_back


    int main(){

        string S;
        cin >> S;
        vector<char>ans;
        int n=S.length();
        for(int i=0;i<n;i++){
            if(ans.size()==0 or S[i]!=ans.back()) ans.pb(S[i]);
            else ans.pop_back();
        }
        if(ans.size()==0) cout<<"Empty String";
        else{
            for(auto x:ans) cout<<x;
        }
    }